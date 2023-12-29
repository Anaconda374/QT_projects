#ifndef SUBDIALOGO_H
#define SUBDIALOGO_H

//Definir un sub_vantana que se provaca por hacer clic a las acciones en el Menú "Insertar".


#include <QDialog>
#include <QStringList> //igual a " QList<QString*> "

namespace Ui {
class SubDialogo;
}

class SubDialogo : public QDialog
{
    Q_OBJECT

public:
    explicit SubDialogo(QWidget *parent = nullptr);
    ~SubDialogo();

    QString elegido() const;

    //iniciar la combo caja usando un QStringList "strLista" que se transmite por la principal vantana.
    void iniciarComboCaja(QStringList cadenaLista);

private slots:
    void on_btnAcceptar_clicked();

    void on_btnRechazar_clicked();

private:
    Ui::SubDialogo *ui;

    QString m_elegido;
};

#endif // SUBDIALOGO_H
