
#include <QCoreApplication>
#include <QDebug>
#include <iostream>

int main(int argc, char *argv[])
{
    //'QCoreApplication' is an event loop for our application, it's passed some arguments and used to set our app.
    QCoreApplication a(argc, argv);

    int val = 0;

//Like C++ STL have 'cout', 'cerr' for output, Header'QDebug' also define different 'QtMsgType' for different types of output, and we can treat different types information in different ways by capturing their type(using 'switch' control).
    qInfo()<< "Enter a number: "; //'qInfo()' used to output normal information.

    std::cin >> val;

    qInfo()<< "Numeber entered is: "<< val ;

    qDebug() << "test information for debug"; //'qDebug()' used to output debug information.

    qCritical()<< "serious problems occured"; //'qCritical()' used to caution the user.

    qFatal("program Crash!!!"); //qFatal(...) used to crash this application intentionally.








    return a.exec();
}
