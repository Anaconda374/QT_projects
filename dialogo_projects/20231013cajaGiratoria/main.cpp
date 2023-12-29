
#include "cajagiratoria.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CajaGiratoria w;
    w.show();
    return a.exec();
}
