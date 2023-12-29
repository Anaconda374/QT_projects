
#include "recogeropciones.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RecogerOpciones w;
    w.show();
    return a.exec();
}
