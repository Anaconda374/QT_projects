
#include <QCoreApplication>
#include "qobject_test.h"

/*
The 'QObject' object in Qt cannot be copied:

    The non-copyable design of QObject in Qt is a deliberate choice made to ensure that object ownership and memory management are handled correctly and to avoid potential issues that could arise from copying objects. It would lead to several problems related to object ownership and memory management.

    In Qt, each QObject has a unique object identifier, which is used for various purposes such as "signal-slot"   connections and event handling. When an object is copied, its object identifier would also need to be copied. However, this would result in two objects with the same identifier, which could cause conflicts and unexpected behavior.

    Moreover, QObjects are designed to have a parent-child relationship, where the parent is responsible for managing the memory of its children. If a QObject is copied, it would not be clear which parent should be responsible for managing the memory of the copy. This could lead to memory leaks or undefined behavior.

    To avoid these problems, the designers of Qt decided to make QObject non-copyable. Instead, they provided other mechanisms for creating new objects, such as using factories, cloning, or moving objects.
 */

QObject* newQobject(){
    QObject *ptr = new QObject(); //To transfer the ownership of an QObject is to pass an address. and since the object created in 'stack(or local memory)' will be destroyed automatically once the variable goes out of the scope. In this way, we will return a pointer which bound to a non_existed object. To aviod this kind of situation, we have to return a pointer which points to a object which allocated in the 'heap(dynamic memory)' using 'new'.
    return ptr;
}

int infoTestPrint(QObject* object){
    qInfo()<< object << Q_FUNC_INFO;
    return 0;//Marco 'Q_FUNC_INFO' contains the information of current function, including "return type", "function name", and "parameter type".
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QObject* p = newQobject();
    infoTestPrint(p);

    delete p; //remember to free the object in dynamic memory to avoid the memory leak.
    return a.exec();
}
