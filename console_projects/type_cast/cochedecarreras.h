
#ifndef COCHEDECARRERAS_H
#define COCHEDECARRERAS_H


#include <QObject>
#include "coche.h"


class CocheDeCarreras : public Coche
{
    Q_OBJECT
public:
    explicit CocheDeCarreras(QObject *parent = nullptr);

    bool superCargado = true;

    void correrRapido();
signals:

};

#endif // COCHEDECARRERAS_H
