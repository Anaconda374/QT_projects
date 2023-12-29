
#ifndef PRINCIPALVANTANA_H
#define PRINCIPALVANTANA_H

#include <QDialog>
#include <QMessageBox>
#include "seleccion.h"


QT_BEGIN_NAMESPACE
namespace Ui { class PrincipalVantana; }
QT_END_NAMESPACE

class PrincipalVantana : public QDialog

{
    Q_OBJECT

public:
    PrincipalVantana(QWidget *parent = nullptr);
    ~PrincipalVantana();

private slots:
    void on_btnRechazar_clicked();

    void on_btnAcceptar_clicked();

    void on_btnElegir_clicked();

private:
    Ui::PrincipalVantana *ui;
};

#endif // PRINCIPALVANTANA_H
