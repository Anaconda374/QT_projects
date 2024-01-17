#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>
#include <QDialog>
#include <QPushButton>
#include <QMessageBox>
#include "servidor.h"

#include <QNetworkInterface>

QT_BEGIN_NAMESPACE
namespace Ui {
class Principal;
}
QT_END_NAMESPACE

class Principal : public QMainWindow
{
    Q_OBJECT

private slots:
    void esCambiado();



    void on_btnAceptar_clicked();

    void on_btnRechazar_clicked();

    void on_btnAdelante_clicked();

    void on_btnAtras_clicked();

    void on_btnEmpezar_clicked();

    void on_btnDetener_clicked();

public:
    Principal(QWidget *parent = nullptr);
    ~Principal();

private:
    Ui::Principal *ui;

    Servidor m_servidor;

    void iniciar(); //parar
    void habibitarBotones(); //para manipular el estado de los botones "Atras","Adelante","Empezar", "Detener".

};
#endif // PRINCIPAL_H
