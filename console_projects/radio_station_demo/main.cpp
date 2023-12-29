
#include <QCoreApplication>

/*
Define 2 classes 'Radio' and 'Station' for demonstration of 'signal' and 'slot':
    Says we are having a radio which can listen to multiple stations. Now we define an application to demostrate the utility of the radio. And once the radio is turned off, the application will also quit.
    A 'Radio' object is set as the parent object to one or more 'Station' objects.
 */
#include <QDebug>
#include <iostream>
#include <QTextStream>
//a library provides the 'QTextStream' class, which is a high-level I/O class that provides formatted text input and output. It is used to read and write text to various I/O devices, such as files, network sockets, and standard input/output.


#include "radio.h"
#include "station.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Radio mi_maquina;
    /*
    Connect the Radio 'mi_maquina' with this Application'a':
        There is no functional difference between calling the general 'QObject::connect()' function and calling the member '.connect()' function of an object. The advantage of using the member function is that it is more concise and easier to read.
NOTE: we have to select the specific connect type to make it work.
     */
    mi_maquina.connect(&mi_maquina, &Radio::quit, &a, &QCoreApplication::quit, Qt::QueuedConnection);

    //define 3 channels which are managed by us using pointers:
    Station* channels[3];
    //Initialize these channels, they are allocated in heap, but also controled by the prasent 'mi_maquina' in stack memory, if the paraent is freed, they will also be deallocated too:
    channels[0] = new Station(&mi_maquina, 110, "estupido");
    channels[1] = new Station(&mi_maquina, 119, "vale");
    channels[2] = new Station(&mi_maquina, 120, "mas o menos");

    //Use a loop to continuously ask the operation of the user:
    do{
        qInfo()<< "Enter an opeation: ON, OFF, TEST or QUIT";
        //define a QTextStream object to read a stream from the stardard output:
        QTextStream qtin(stdin);

        //Convert the read stream into a uppercase string:
            QString optr = qtin.readLine().trimmed().toUpper();
        //Firstly, take the first line; secondly, trim it with space; lastly, convert all letters into uppercases.
        if(optr == "ON"){
            //if operation is 'ON', connect the radio with all stations:
            qInfo()<<"Turning the radio on";
            for(int i = 0; i < 3; i++){
                Station* currChannel = channels[i];
                mi_maquina.connect(currChannel, &Station::sendData, &mi_maquina, &Radio::listen);
            }
            qInfo()<<"Radio is on now";
        }

        if(optr == "OFF"){
            //if operation is 'off', disconnect the radio from all stations:
            qInfo()<<"Turning the radio off";
            for(int i = 0; i < 3; i++){
                Station* currChannel = channels[i];
                mi_maquina.disconnect(currChannel, &Station::sendData, &mi_maquina, &Radio::listen);
            }
            qInfo()<<"Radio is off now";
        }

        if(optr == "TEST"){
            //if operation is 'Test', print some test information:
            qInfo()<<"Testing";
            for(int i = 0; i < 3; i++){
                Station* currChannel = channels[i];
                mi_maquina.connect(currChannel, &Station::sendData, &mi_maquina, &Radio::listen);
                currChannel->broadcast("broadcasting now");
            }
            qInfo()<<"Test completed";
        }

        if(optr == "QUIT"){
            //if operation is 'QUIT', emit the signal 'quit' to quit the whole application
            qInfo()<<"Quiting";
            mi_maquina.quit();
            break;
        }

    }while (true);


    return a.exec();
}
