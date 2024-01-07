   #include "ecuacion.h"

Ecuacion::Ecuacion(QObject *parent)
    : QObject{parent}
{
    m_accion = Accion::Reiniciar; //configurar la acción inicial.

    calcular(); //ejecutar el cálculo.

}

void Ecuacion::calcular()
{
//Inicializar los valores que se van a calcular.
    double dval1 = sacarValor(m_valor1);
    double dval2 = sacarValor(m_valor2);
    double dsuma = 0;

    //En realidad, solo usa la unidad algorítmica de CPU a ejercer los cálculos.
    switch(m_accion){
    case Accion::Nada: //hacer nada.
        break;
    case Accion::Reiniciar:
        //limpiar los valores:
        m_resultado.clear();
        m_valor1.clear();
        m_valor2.clear();

        //m_accion se comvierte a "nada".
        m_accion = Accion::Nada;
        break;
    case Accion::Sumar:
        dsuma = dval1 + dval2;
        break;
    case Accion::Sustraer:
        dsuma = dval1 - dval2;
        break;
    case Accion::Multiplicar:
        dsuma = dval1 * dval2;
        break;
    case Accion::Dividir:
        dsuma = dval1 / dval2;
        break;

    }

    //Convertir y almacenar estos valor en miembros de la clase.
    m_valor1 = QString::number(dval1);
    m_valor2 = QString::number(dval2);
    m_resultado = QString::number(dsuma);


    qInfo()<< "Valor1: " <<m_valor1<< " Valor2: "<< m_valor2<< " Resultado: "<<m_resultado;


}

//definir una función que convierte la ecuación en una cadena correspondiente para luego mostrarla en la panel de "QWidgetList".
QString Ecuacion::toString()
{
    QString muestra;
    muestra.append(m_valor1);
    muestra.append(" ");

    switch(m_accion){
    case Accion::Nada:
        muestra.append("?");
        break;
    case Accion::Reiniciar:
        muestra.append("?");
        break;
    case Accion::Sumar:
        muestra.append("+");
        break;
    case Accion::Sustraer:
        muestra.append("-");
        break;
    case Accion::Multiplicar:
        muestra.append("*");
        break;
    case Accion::Dividir:
        muestra.append("/");
        break;

    }

    muestra.append(" ");
    muestra.append(m_valor2);
    muestra.append(" = ");
    muestra.append(m_resultado);

    return muestra;

}



QString Ecuacion::valor1() const
{
    return m_valor1;
}

void Ecuacion::setValor1(const QString &newValor1)
{
    m_valor1 = newValor1;
}

QString Ecuacion::valor2() const
{
    return m_valor2;
}

void Ecuacion::setValor2(const QString &newValor2)
{
    m_valor2 = newValor2;
}

Ecuacion::Accion Ecuacion::accion() const
{
    return m_accion;
}

void Ecuacion::setAccion(const Ecuacion::Accion &newAccion)
{
    m_accion = newAccion;
}

QString Ecuacion::resultado() const
{
    return m_resultado;
}

void Ecuacion::setResultado(const QString &newResultado)
{
    m_resultado = newResultado;
}

//Sacar el valor de una cadena, y devuelve un "doble"
double Ecuacion::sacarValor(QString dato)
{
    bool ok;
    double valor = dato.toDouble(&ok);
    if(!ok) valor = 0; //si el cadena no se puede convertir a un doble objeto, asignar "0" a "valar".
    return valor;
}


