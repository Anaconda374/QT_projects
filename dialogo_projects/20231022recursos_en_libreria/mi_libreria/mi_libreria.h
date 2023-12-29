
#ifndef MI_LIBRERIA_H
#define MI_LIBRERIA_H


#include <QString>
#include <QFile>
#include <QTextStream>

#include "mi_libreria_global.h"


class MI_LIBRERIA_EXPORT Mi_libreria
{
public:
    Mi_libreria();

    QString mensaje();

    QString comprobar();
};


#endif // MI_LIBRERIA_H
