
#ifndef RECOGEROPCIONES_H
#define RECOGEROPCIONES_H

#include <QDialog>
#include <QMessageBox>
#include <QGroupBox>



QT_BEGIN_NAMESPACE
namespace Ui { class RecogerOpciones; }
QT_END_NAMESPACE

class RecogerOpciones : public QDialog

{
    Q_OBJECT

public:
    RecogerOpciones(QWidget *parent = nullptr);
    ~RecogerOpciones();

    QString recogerOpciones(QGroupBox* grp);

private slots:
    void on_btnAcceptar_clicked();

    void on_btnRechazar_clicked();



private:
    Ui::RecogerOpciones *ui;
};

#endif // RECOGEROPCIONES_H
