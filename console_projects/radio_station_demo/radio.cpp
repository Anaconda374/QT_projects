
#include "radio.h"

Radio::Radio(QObject *parent)
    : QObject{parent}
{

}

void Radio::listen(int channelNum, QString name, QString message)
{
    //output the message to demostrate that we are listening:
    qInfo()<<channelNum << " " << name << "-" <<message;
}

