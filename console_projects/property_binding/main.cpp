
#include <QCoreApplication>

/*
Property binding in Qt:
    when we define a class, it may have different properties, and we can bind these properties with each other, so that their value are related. In Qt, usually using 'signal' and 'slot' to bind them.
    Property: In Qt, a property represents an attribute or value associated with an object. It can be thought of as a variable that holds data within an object.

Properties in Qt have several features, including:
    1. Read and write access: Properties can be read and modified programmatically.
    2.Notification: Properties can emit signals when their values change, allowing other parts of the application to react to those changes.
    3.Binding: Properties can be bound to each other, establishing a relationship where changes in one property automatically propagate to the other.
 */

#include "test.h"
#include "watcher.h"

#include <QVariant>
/*
The ‘QVariant’ class is a part of the Qt framework and provides a generic and flexible way to store and manipulate data of different types. It is a container class that can hold values of various types, such as integers, strings, booleans, dates, lists, maps, and custom types.
 */


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Test tester;
    Watcher receiver;

    QObject::connect(&tester, &Test::messageChanged, &receiver, &Watcher::messageChangedWatcher);

    //set Member'msg' with a string "hello, world!" through 'property' function :
    tester.setProperty("message",QVariant("hello,world!"));
    //the 1st parameter should match the property name which defined in Class "Test", and when this function executes, the signal 'messageChanged' is emited too.

    qInfo()<< tester.msg();

    //set Member'msg' with a string "testing" using Member Function 'setter'
    tester.setMsg("testing");
    qInfo()<< tester.msg();


    return a.exec();
}
