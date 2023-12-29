
#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QSettings>
#include <QMessageBox>
#include <QFont>


QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog

{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:

    void on_btnAlma_clicked();

    void on_btnCanc_clicked();

    void on_fuenteComboCaja_currentFontChanged(const QFont &f);

private:
    Ui::Dialog *ui;

    void iniciar();
    void cargar();
};

#endif // DIALOG_H
