
#include "station.h"

Station::Station(QObject *parent, int channel, QString name) : QObject{parent}
{
    this->channelNum = channel;
    this->channelName = name;

}

void Station::broadcast(QString message)
{
    emit sendData(channelNum, channelName, message);
}
