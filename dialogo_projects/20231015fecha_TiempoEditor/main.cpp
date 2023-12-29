
#include "fecha_tiempo.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    fecha_tiempo w;
    w.show();
    return a.exec();
}
