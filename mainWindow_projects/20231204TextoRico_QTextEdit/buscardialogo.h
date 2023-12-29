#ifndef BUSCARDIALOGO_H
#define BUSCARDIALOGO_H

#include <QDialog>
#include "textoinfo.h"

//crear un sub_dialogo para buscar un texto.

namespace Ui {
class BuscarDialogo;
}

class BuscarDialogo : public QDialog
{
    Q_OBJECT

public:
    explicit BuscarDialogo(QWidget *parent = nullptr);
    ~BuscarDialogo();

signals:
    void buscarDatoEviado(const TextoInfo& dato);

    void reemplazarDataEviado(const TextoInfo& dato);

private slots:

    void on_btnRechazar_clicked();

    void on_btnAdelante_clicked();

    void on_btnDetras_clicked();

    void on_btnReemplazar_clicked();

    void on_btnReemplazarTodo_clicked();

    void on_cajaDistingue_stateChanged(int arg1);

    void on_cajaCoincide_stateChanged(int arg1);

    void buscarDevolver();

    void reemplazarDevolver();

private:
    Ui::BuscarDialogo *ui;

    TextoInfo dato;

    void guardar();
};

#endif // BUSCARDIALOGO_H
