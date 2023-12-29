#include "directoriomostrador.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    directorioMostrador w;
    w.show();
    return a.exec();
}
