
#include "dialog.h"

#include <QApplication>


/*
NOTA:
    1.solo se puede elegir uno de los radio_botones en un contenedor.
    2.segunra los boton hijo estan dentro del contenedor ambiente.(El contenerdor es diferente de la disposicion).
*/
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();
    return a.exec();
}
