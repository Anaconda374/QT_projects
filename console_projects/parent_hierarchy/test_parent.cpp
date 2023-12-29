
#include "test_parent.h"

test_parent::test_parent(QObject *parent)
    : QObject{parent}
{
    qInfo()<< "parent object " << this << " is created!";

}

test_parent::~test_parent()
{
    qInfo()<< "parent object " << this << " is destroyed!";
}

