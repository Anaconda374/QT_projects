
#include "testclass.h"

//The definition of the contructor of 'testClass', using a QObject Pointer'parent' to initialize the Member'QObject' which is inherited from Class'QObject'.
testClass::testClass(QObject *ptr):QObject(ptr) {
    qInfo()<< this << "constructed";
    //Each time a object is constructed, the program will output the memory address of 'this' object and a string "constructed".

}


