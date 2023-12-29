/********************************************************************************
** Form generated from reading UI file 'seleccion.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECCION_H
#define UI_SELECCION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Seleccion
{
public:
    QListWidget *listaArtilugio;
    QPushButton *btnAcceptar;
    QPushButton *btnRechazar;

    void setupUi(QDialog *Seleccion)
    {
        if (Seleccion->objectName().isEmpty())
            Seleccion->setObjectName(QString::fromUtf8("Seleccion"));
        Seleccion->resize(400, 300);
        listaArtilugio = new QListWidget(Seleccion);
        listaArtilugio->setObjectName(QString::fromUtf8("listaArtilugio"));
        listaArtilugio->setGeometry(QRect(40, 40, 256, 192));
        btnAcceptar = new QPushButton(Seleccion);
        btnAcceptar->setObjectName(QString::fromUtf8("btnAcceptar"));
        btnAcceptar->setGeometry(QRect(160, 250, 86, 26));
        btnRechazar = new QPushButton(Seleccion);
        btnRechazar->setObjectName(QString::fromUtf8("btnRechazar"));
        btnRechazar->setGeometry(QRect(260, 250, 86, 26));

        retranslateUi(Seleccion);

        QMetaObject::connectSlotsByName(Seleccion);
    } // setupUi

    void retranslateUi(QDialog *Seleccion)
    {
        Seleccion->setWindowTitle(QCoreApplication::translate("Seleccion", "Dialog", nullptr));
        btnAcceptar->setText(QCoreApplication::translate("Seleccion", "Acceptar", nullptr));
        btnRechazar->setText(QCoreApplication::translate("Seleccion", "Rechazar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Seleccion: public Ui_Seleccion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECCION_H
