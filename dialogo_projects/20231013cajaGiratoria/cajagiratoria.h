
#ifndef CAJAGIRATORIA_H
#define CAJAGIRATORIA_H

#include <QDialog>

#include <QFile> //"QFile" es una clase que permite leer y escribir archivos de texto y binarios.
#include <QDataStream>
#include <QString>
#include <QMessageBox>


/*
El artilugio caja giratoria“spinBox” es un tipo de control que permite al usuario seleccionar un valor entero de un rango preestablecido(se puede asignar en su filtro'filter' en UI form), usando botones de incremento y decremento o el teclado.
 */


QT_BEGIN_NAMESPACE
namespace Ui { class CajaGiratoria; }
QT_END_NAMESPACE

class CajaGiratoria : public QDialog

{
    Q_OBJECT

public:
    CajaGiratoria(QWidget *parent = nullptr);
    ~CajaGiratoria();

private slots:
    void on_btnCaja_clicked(QAbstractButton *button);

private:
    Ui::CajaGiratoria *ui;

    void almacenar();

    void cargar();


};

#endif // CAJAGIRATORIA_H
