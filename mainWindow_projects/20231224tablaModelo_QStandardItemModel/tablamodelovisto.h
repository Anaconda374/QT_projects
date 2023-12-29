#ifndef TABLAMODELOVISTO_H
#define TABLAMODELOVISTO_H

#include <QMainWindow>

//Crear una ventana que tiene una vista de tabla forma, este tipo de modelo se llamado "el tabla modelo" o "la tabla vista".
#include <QStandardItemModel>
#include <QStandardItem>

#include <QMessageBox>
#include <QStringList>

QT_BEGIN_NAMESPACE
namespace Ui {
class TablaModeloVisto;
}
QT_END_NAMESPACE

class TablaModeloVisto : public QMainWindow
{
    Q_OBJECT

public:
    TablaModeloVisto(QWidget *parent = nullptr);
    ~TablaModeloVisto();


private slots:
    void celdaCambiada(QStandardItem* item);

    void on_aceptarBtn_clicked();

private:
    Ui::TablaModeloVisto *ui;

    QStandardItemModel tablaModelo;

    void iniciar();

};
#endif // TABLAMODELOVISTO_H
