#ifndef EDITOR_H
#define EDITOR_H

#include <QDialog>
#include "musica.h"

namespace Ui {
class Editor;
}

class Editor : public QDialog
{
    Q_OBJECT

public:
    explicit Editor(QWidget *parent = nullptr);
    ~Editor();

    Musica getE_cancion() const;
    void setE_cancion(const Musica &new_cancion);

private slots:
    void on_btnAcceptar_clicked();

    void on_btnRechazar_clicked();

private:
    Ui::Editor *ui;

    Musica e_cancion;
};

#endif // EDITOR_H
