#ifndef DIALOGDEMO2_H
#define DIALOGDEMO2_H

#include <QDialog>

namespace Ui {
class DialogDemo2;
}

class DialogDemo2 : public QDialog
{
    Q_OBJECT

public:
    explicit DialogDemo2(QWidget *parent = nullptr);
    ~DialogDemo2();

private slots:
    void on_btnAcceptar_clicked();

private:
    Ui::DialogDemo2 *ui;
};

#endif // DIALOGDEMO2_H
