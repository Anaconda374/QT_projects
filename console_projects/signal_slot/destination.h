
#ifndef DESTINATION_H
#define DESTINATION_H


#include <QObject>
#include <QDebug>

/*
    In Qt, a 'slot' is a member function of a class that is used to respond to a 'signal' emitted by other parts of the application. Slots are used to handle events or perform some action in response to a signal.
 */

class Destination : public QObject
{
    Q_OBJECT
public:
    explicit Destination(QObject *parent = nullptr);

signals:

/*
    A slot is declared using the 'slots' keyword in the class definition, preceded by the access specifier (public, protected, or private) and the function signature of the slot. The function signature of a slot is similar to that of a regular member function, but with the addition of the slots keyword.
 */
public slots:
    //if we define 'signal' and 'slot' have the same type(or convertible) of argument. 'slot' can receive the argument which is the argument token by signal.
    void my_slot(QString msg);

};

#endif // DESTINATION_H
