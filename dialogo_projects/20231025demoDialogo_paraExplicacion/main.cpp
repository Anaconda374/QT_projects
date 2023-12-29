
#include "demodialogo.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DemoDialogo w;
    w.show();
    return a.exec();
}
