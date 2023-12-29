
#ifndef QOBJECT_TEST_H
#define QOBJECT_TEST_H


#include <QObject>
/*
<QObject> is a fundamental class in the Qt framework, It is used as the base class for most of the classes in the Qt library that are meant to have some properties, signals, and slots, which are essential for building responsive and event-driven applications.It provides several features like:
    1.Basic variable types;

    2.Dynamic variables: QObject allows you to add dynamic properties to your objects at runtime. This can be useful when you want to add properties that are not known at compile-time.It is similar to Class'allocator' in C++.

    3.Signals and Slots;

    4.Object trees and Parent-Child Relationships: In Qt, QObject provides a hierarchical object tree structure that allows you to organize objects in a parent-child relationship. When you create a QObject, you can specify a parent for it, and the parent will take ownership of the child object. This means that when the parent is destroyed, all its child objects will be destroyed as well.

*/


class qObject_test : public QObject
{
    Q_OBJECT
/*
 'Q_OBJECT' macro is used to declare that a class is using the Qt's object system, which enables features like signals, slots, and properties.
Here are some of the features that you can use when including <QObject> header without Q_OBJECT macro:
    1.Object tree;
    2.Memory management;
    3.Event handling;
    4.Thread-safety;
Macro'Q_OBJECT' enables the Qt's meta-object system to generate the necessary code to support these features at runtime.
Without the Q_OBJECT macro, you won't be able to use signals and slots, nor can you define your own signals and slots. Additionally, you won't be able to use the property system, which allows you to define properties for your objects that can be read and written using accessor functions.
*/
public:
    explicit qObject_test(QObject *parent = nullptr);

signals:

};

#endif // QOBJECT_TEST_H
