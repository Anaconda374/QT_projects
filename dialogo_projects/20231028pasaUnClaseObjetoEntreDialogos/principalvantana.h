
#ifndef PRINCIPALVANTANA_H
#define PRINCIPALVANTANA_H

#include <QDialog>
#include <QMessageBox>
#include "musica.h"
#include "editor.h"


/*
Definir 2 diálogos "PrincipalVantana" y "Editor", y una dato_clase "Musica" para demostrar cómo un objeto se transmite entre   los dos diálogos:
    1. "PrincipalVantana" para mostrar los datos guardado en la clase "Musica";
    2. "Editor" para editar los datos guardado en la clase "Musica";
(NOTA: Aunque "PrincipalVantana" y "Editor" están destinados a operar sobre el mismo objeto, ello son dos clases diferentes, y tienen sus propio miembros de la clase "Musica". Por eso hay asignaciones entre sus propio miembros de la misma clase.)

    3. "Musica" un clase parar almacenar los datos.

 *
 *
 */


QT_BEGIN_NAMESPACE
namespace Ui { class PrincipalVantana; }
QT_END_NAMESPACE

class PrincipalVantana : public QDialog

{
    Q_OBJECT

public:
    PrincipalVantana(QWidget *parent = nullptr);
    ~PrincipalVantana();


    Musica getP_cancion() const;

    void setP_cancion();

private slots:


    void on_btnAcceptar_clicked();

    void on_btnRechzar_clicked();

    void on_btnEditar_clicked();

private:
    Ui::PrincipalVantana *ui;

    void cargar();

    Musica p_cancion;


};

#endif // PRINCIPALVANTANA_H
