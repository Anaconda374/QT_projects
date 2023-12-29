
#include "dueno.h"

Dueno::Dueno(QObject *parent)
    : QObject{parent}
{

}

void Dueno::darComida(){
    qInfo()<<"comida es lista!";
        emit alimentar();

}

