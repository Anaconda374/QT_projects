#ifndef TEXTOINFO_H
#define TEXTOINFO_H

#include <QObject>
#include <QString>

class TextoInfo
{
public:
    TextoInfo();


    QString getBuscarTexto() const;
    void setBuscarTexto(const QString &newBuscarTexto);

    QString getReemplazarTexto() const;
    void setReemplazarTexto(const QString &newReemplazarTexto);

    bool getEsTodoElegido() const;
    void setEsTodoElegido(bool newEsTodoElegido);

    bool getEsCoincidido() const;
    void setEsCoincidido(bool newEsCoincidido);

    bool getEsDistinguido() const;
    void setEsDistinguido(bool newEsDistinguido);

    bool getEsBuscarDetras() const;
    void setEsBuscarDetras(bool newEsBuscarDetras);

private:
    QString buscarTexto;

    QString reemplazarTexto;

    bool esTodoElegido;

    bool esCoincidido;

    bool esDistinguido;

    bool esBuscarDetras;
};

#endif // TEXTOINFO_H
