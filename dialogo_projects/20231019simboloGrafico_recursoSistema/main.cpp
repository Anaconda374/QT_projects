
#include "recursosistema.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    recursoSistema w;
    w.show();
    return a.exec();
}
