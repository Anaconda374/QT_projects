
#include "dialog.h"

#include <QApplication>
/*
Las funciones accept(), exec(), open() y reject() de la clase 'QDialog' son:

    1.accept(): un slot público que acepta el diálogo y oculta la ventana. También emite la señal accepted() y establece el resultado del diálogo a QDialog::Accepted.
    2.exec(): un slot público que muestra el diálogo como modal y bloquea hasta que el usuario lo cierra. Devuelve el resultado del diálogo (QDialog::Accepted o QDialog::Rejected).
    3.open(): un slot público que muestra el diálogo como no modal. Cuando se cierra el diálogo, se emite la señal finished() con el resultado del diálogo.
    4.reject(): un slot público que rechaza el diálogo y oculta la ventana. También emite la señal rejected() y establece el resultado del diálogo a QDialog::Rejected.

    Estas funciones se pueden llamar desde el código o desde los botones del diálogo2. El resultado del diálogo se puede obtener mediante la función result() o mediante las señales accepted(), rejected() o finished()34.


 */

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();
    return a.exec();
}
