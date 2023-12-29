#ifndef SOBRENOSOTROS_H
#define SOBRENOSOTROS_H

#include <QDialog>

namespace Ui {
class SobreNosotros;
}

class SobreNosotros : public QDialog
{
    Q_OBJECT

public:
    explicit SobreNosotros(QWidget *parent = nullptr);
    ~SobreNosotros();

private:
    Ui::SobreNosotros *ui;
};

#endif // SOBRENOSOTROS_H
