#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <QMainWindow>
#include <QPushButton>
#include <QGridLayout>
#include <QMessageBox>
#include "ecuacion.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Calculadora;
}
QT_END_NAMESPACE

class Calculadora : public QMainWindow
{
    Q_OBJECT

public:
    Calculadora(QWidget *parent = nullptr);
    ~Calculadora();

private slots:
    void limpiar();
    void sumar();
    void sustraer();
    void multiplicar();
    void dividir();
    void numero();
    void actualizar();
    void anadirEcuacion();

    void on_btnAceptar_clicked();

    void on_btnLimpiar_clicked();

    void on_btnNueva_clicked();

private:
    Ui::Calculadora *ui;

    QList<Ecuacion*> m_lista;
    Ecuacion* recuperarUltima();
    void iniciar();
    void actualizarValor(QString dato);
    void actualizarAccion(Ecuacion::Accion accion);
};
#endif // CALCULADORA_H
