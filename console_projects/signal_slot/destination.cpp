
#include "destination.h"

Destination::Destination(QObject *parent)
    : QObject{parent}
{

}

void Destination::my_slot(QString msg)
{
    qInfo()<< msg;
    qInfo()<< "slot received the signal.";
}



