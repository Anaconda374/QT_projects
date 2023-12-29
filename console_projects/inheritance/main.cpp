
#include <QCoreApplication>
#include "mammal.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

/*
    When we create an object of a derived class in C++ that inherits from a base class, memory is allocated for a single object that contains the data members of both the derived class and the base class.
    such that we don't create two separate objects, but rather a single object with the combined characteristics of both the base and derived classes.
*/
    mammal dog;

    return a.exec();
}
