
#include "dialog.h"

#include <QApplication>

/*
    Un artilugio spliter es una clase de Qt Widgets que implementa "un widget divisor". Un widget divisor permite al usuario controlar el tamaño de los widgets hijos, incluso arrastrando el borde entre ellos cuando la aplicación es ejecutada. Puede crear varios widgets y añadirlos usando 'insertWidget.()' o 'addWidget.()'. También puede usar Qt Designer para crear un splitter que contenga los widgets que desea. Puede reemplazar un widget en un splitter con otro usando 'replaceWidget.()'.
 */

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();
    return a.exec();
}
