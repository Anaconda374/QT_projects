
#include "test_child.h"

test_child::test_child(QObject *parent)
    : QObject{parent}
{
    qInfo()<<"child"<<this <<"is created";
}

test_child::~test_child()
{
    qInfo()<<"child"<<this <<"is destoryed";
}

