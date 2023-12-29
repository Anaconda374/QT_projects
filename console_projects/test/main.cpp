
#include "dialog.h"

#include <QApplication>

//'*.ui' es un XML archivo que se comunica con el Qt sistema para generar los graficos.


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();
    return a.exec();
}
