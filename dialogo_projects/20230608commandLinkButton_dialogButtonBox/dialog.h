
#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
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

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_buttonBox_helpRequested();

    void on_cmdBtnRegistro_clicked();

    void on_cmdBtnBuscar_clicked();

private:
    Ui::Dialog *ui;
    void modoElegido(QObject* emisor);
};

#endif // DIALOG_H
