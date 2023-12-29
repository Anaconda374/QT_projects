
#ifndef INPUTFORMULARIOVALIDACION_H
#define INPUTFORMULARIOVALIDACION_H

#include <QDialog>
#include <QMessageBox>

//La clase "QReugularExpression" proporciona coincidencia de patrones usando "Regex".
#include <QRegularExpression>

#include <QRegularExpressionValidator>

/*
Input formulario validacion:
    "inputMask"('mascara de entrada'): En la propiedad del "QLineEdit" se puede poner el formulario parar obligar al usuario a entrar de una forma determinada. Y se puede consultar en la Qt documentacion: https://doc.qt.io/qt-6/qlineedit.html.

    "Regular expression"(acortado como 'regex'): para algunos datos, por ejemplo "correo electronico" que puede ser de diferente longitud, pero tambian segun una forma(tiene '@' y '.com'), y usar 'inputMask' no es suficiente en este caso. Por eso se necesita usar 'regex' a definir la forma via escribir codigo.

*/



QT_BEGIN_NAMESPACE
namespace Ui { class inputFormularioValidacion; }
QT_END_NAMESPACE

class inputFormularioValidacion : public QDialog

{
    Q_OBJECT

public:
    inputFormularioValidacion(QWidget *parent = nullptr);
    ~inputFormularioValidacion();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void validarEntrada();

private:
    Ui::inputFormularioValidacion *ui;
};

#endif // INPUTFORMULARIOVALIDACION_H
