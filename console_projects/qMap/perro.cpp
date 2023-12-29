
#include "perro.h"

int Perro::getEdad() const
{
    return edad;
}

void Perro::setEdad(int newEdad)
{
    edad = newEdad;
}

QString Perro::getNombre() const
{
    return nombre;
}

void Perro::setNombre(const QString &newNombre)
{
    nombre = newNombre;
}

Perro::Perro(QObject *parent)
    : QObject{parent}
{

}

