
#ifndef TESTCLASS_H
#define TESTCLASS_H


#include <QObject>
#include <QDebug>


class testClass : public QObject
{
    Q_OBJECT
public:
    //The declaration of constructor, 'ptr' will be 'nullptr' by default if no argument passed, it is defined in 'testclass.cpp'
    explicit testClass(QObject *ptr = nullptr);

signals:

};

#endif // TESTCLASS_H
