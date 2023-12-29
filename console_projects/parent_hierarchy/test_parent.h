
#ifndef TEST_PARENT_H
#define TEST_PARENT_H


#include <QObject>
#include <QDebug>

class test_parent : public QObject
{
    Q_OBJECT
public:
    explicit test_parent(QObject *parent = nullptr);
    ~test_parent();

signals:

};

#endif // TEST_PARENT_H
