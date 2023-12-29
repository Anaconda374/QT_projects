#include "archivosistemapersonalizado.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ArchivoSistemaPersonalizado w;
    w.show();
    return a.exec();
}
