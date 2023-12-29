
#include <QCoreApplication>
#include <QDebug>
#include "agecal.h"

void printAge(AgeCal p1){
    qInfo()<< p1.getName() <<"'s human age is: "<< p1.age()<<"\n dog age is: "<<p1.dogAge();

}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    AgeCal Javier;
    Javier.setAge(28);
    Javier.setName("Javier");

    printAge(Javier);

    return a.exec();
}
