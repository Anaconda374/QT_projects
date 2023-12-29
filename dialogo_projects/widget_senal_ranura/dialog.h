
#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QDebug>
#include <QMessageBox>
#include <QDateTime>


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
    void imprimirFecha();
    void saltarFecha();

    void on_btnImprimir_clicked();

private:
    Ui::Dialog *ui;

};

#endif // DIALOG_H
