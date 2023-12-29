
#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QObjectList>
#include <QString>
#include <QMessageBox>
#include <QDebug>


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
    //Definir una funcion para imprimir todos los platos en menu.
    void on_btnImprimirTodo_clicked();

    void on_btnCometer_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
