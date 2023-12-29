
#ifndef DIALOGDEMO1_H
#define DIALOGDEMO1_H

/*
Este proyecto para mostrar cómo se define múltiple diálogos en un proyecto, y cómo se funcionan:
    "Dialogdemo1" es el padre_diálogo.
    "Dialogdemo2" es el hijo_dialogo.
Si un diálogo es inicializada por su padre_diálogo, cuando padre_diálogo se cierra, el hijo_diálogo se cerrará automáticamente.

NOTA: Cuando todavio se existe, por lo menos, uno de diálogos(una ventana) funcionando, la aplicación se sigue ejecutando.
*/




#include <QDialog>
#include "./dialogdemo2.h" //necesitamos incluir "la definición del hijo_dialogo" al dialogo principal.



QT_BEGIN_NAMESPACE
namespace Ui { class DialogDemo1; }
QT_END_NAMESPACE

class DialogDemo1 : public QDialog

{
    Q_OBJECT

public:
    DialogDemo1(QWidget *parent = nullptr);
    ~DialogDemo1();

private slots:
    void on_btnConPadre_clicked();

    void on_btnSinPadre_clicked();

    void on_btnConPadre_modalDialogo_clicked();

private:
    Ui::DialogDemo1 *ui;
};

#endif // DIALOGDEMO1_H
