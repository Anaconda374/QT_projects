
#ifndef TEST_CHILD_H
#define TEST_CHILD_H


#include <QObject>
#include <QDebug>


class test_child : public QObject
{
    Q_OBJECT
public:
    explicit test_child(QObject *parent = nullptr);
    ~test_child();




signals:

};

#endif // TEST_CHILD_H
