
#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>



QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog

{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog *ui;
/*
    El miembro privado 'Ui::Dialog *ui' de una clase Dialog en Qt es "un puntero a una instancia de la clase 'Ui::Dialog' que se genera a partir del archivo 'ui_dialog.h' creado por el compilador de interfaz de usuario de Qt a partir del archivo 'dialog.ui'.
    Este puntero se usa para acceder a los widgets y elementos de la interfaz de usuario definidos en el archivo 'dialog.ui'. Por ejemplo, si hay una etiqueta llamada **etMensaje** en el archivo 'dialog.ui', se puede acceder a ella mediante el código 'ui->etMensaje'.

 */
};

#endif // DIALOG_H
