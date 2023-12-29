
#ifndef MAMMAL_H
#define MAMMAL_H


#include <QObject>
#include <QDebug>
#include "animal.h"


class mammal : public animal
{
    Q_OBJECT
public:
    explicit mammal(animal *ptr = nullptr);

signals:

};

#endif // MAMMAL_H
