#ifndef ECUACION_H
#define ECUACION_H

#include <QObject>

#include <QDebug> //en "calcular()", para imprimir los trámites de cálculos en el panel de consola.

class Ecuacion : public QObject
{
    Q_OBJECT
public:
    explicit Ecuacion(QObject *parent = nullptr);

    enum Accion {Nada, Reiniciar, Sumar, Sustraer, Multiplicar, Dividir};



    QString valor1() const;
    void setValor1(const QString &newValor1);



    QString valor2() const;
    void setValor2(const QString &newValor2);

    Ecuacion::Accion accion() const;
    void setAccion(const Ecuacion::Accion &newAccion);


    QString resultado() const;
    void setResultado(const QString &newResultado);

    void calcular();

    QString toString();

signals:


private:
    QString m_resultado;
    QString m_valor1;
    QString m_valor2;

    Ecuacion::Accion m_accion;

    double sacarValor(QString dato);

};

#endif // ECUACION_H
