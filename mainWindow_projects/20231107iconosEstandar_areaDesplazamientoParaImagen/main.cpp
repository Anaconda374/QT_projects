
#include "cambiareltamano.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CambiarElTamano w;
    w.show();
    return a.exec();
}
