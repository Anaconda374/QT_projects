
#include "perro.h"
#include "qdebug.h"

Perro::Perro(QObject *parent)
    : QObject{parent}
{

}

void Perro::comer()
{
    qInfo()<< "ladrar";
}

