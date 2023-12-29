
#ifndef FECHA_TIEMPO_H
#define FECHA_TIEMPO_H

#include <QDialog>
#include <QMessageBox>
#include <QDateTime>



QT_BEGIN_NAMESPACE
namespace Ui { class fecha_tiempo; }
QT_END_NAMESPACE

class fecha_tiempo : public QDialog

{
    Q_OBJECT

public:
    fecha_tiempo(QWidget *parent = nullptr);
    ~fecha_tiempo();

private slots:

    void on_registrarBtn_clicked();

    void on_rechazarBtn_clicked();

    void on_fechaEditor_userDateChanged(const QDate &date);

    void on_tiempoEditor_userTimeChanged(const QTime &time);

private:
    Ui::fecha_tiempo *ui;
};

#endif // FECHA_TIEMPO_H
