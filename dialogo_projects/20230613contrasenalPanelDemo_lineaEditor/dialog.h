
#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QMetaEnum>
#include <QMessageBox>

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
    void on_lineaEditor_textChanged(const QString &arg1);

    void on_marcaPermitir_toggled(bool checked);

    void on_marcaSoloLeer_toggled(bool checked);

    void on_marcaLimpiar_toggled(bool checked);

    void on_btnCometer_clicked();

    void on_comboEcho_currentIndexChanged(int index);

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
