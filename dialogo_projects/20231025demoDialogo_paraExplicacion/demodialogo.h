
#ifndef DEMODIALOGO_H
#define DEMODIALOGO_H

#include <QDialog>



QT_BEGIN_NAMESPACE
namespace Ui { class DemoDialogo; }
QT_END_NAMESPACE

class DemoDialogo : public QDialog

{
    Q_OBJECT

public:
    DemoDialogo(QWidget *parent = nullptr);
    ~DemoDialogo();

private:
    Ui::DemoDialogo *ui;
};

#endif // DEMODIALOGO_H
