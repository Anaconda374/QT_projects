#include "textoinfo.h"

TextoInfo::TextoInfo() {}

QString TextoInfo::getBuscarTexto() const
{
    return buscarTexto;
}

void TextoInfo::setBuscarTexto(const QString &newBuscarTexto)
{
    buscarTexto = newBuscarTexto;
}

QString TextoInfo::getReemplazarTexto() const
{
    return reemplazarTexto;
}

void TextoInfo::setReemplazarTexto(const QString &newReemplazarTexto)
{
    reemplazarTexto = newReemplazarTexto;
}

bool TextoInfo::getEsTodoElegido() const
{
    return esTodoElegido;
}

void TextoInfo::setEsTodoElegido(bool newEsTodoElegido)
{
    esTodoElegido = newEsTodoElegido;
}

bool TextoInfo::getEsCoincidido() const
{
    return esCoincidido;
}

void TextoInfo::setEsCoincidido(bool newEsCoincidido)
{
    esCoincidido = newEsCoincidido;
}

bool TextoInfo::getEsDistinguido() const
{
    return esDistinguido;
}

void TextoInfo::setEsDistinguido(bool newEsDistinguido)
{
    esDistinguido = newEsDistinguido;
}

bool TextoInfo::getEsBuscarDetras() const
{
    return esBuscarDetras;
}

void TextoInfo::setEsBuscarDetras(bool newEsBuscarDetras)
{
    esBuscarDetras = newEsBuscarDetras;
}
