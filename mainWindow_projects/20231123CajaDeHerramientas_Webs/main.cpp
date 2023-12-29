
#include "webmarcador.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WebMarcador w;
    w.show();
    return a.exec();
}
