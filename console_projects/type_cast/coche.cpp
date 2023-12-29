
#include "coche.h"

Coche::Coche(QObject *parent)
    : QObject{parent}
{

}

void Coche::mover()
{
    qInfo()<<"esta moviendo.";
}

void Coche::detener()
{
    qInfo()<<"esta parado.";
}

