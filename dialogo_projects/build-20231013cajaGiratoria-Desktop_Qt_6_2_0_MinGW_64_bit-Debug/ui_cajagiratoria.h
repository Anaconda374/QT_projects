/********************************************************************************
** Form generated from reading UI file 'cajagiratoria.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAJAGIRATORIA_H
#define UI_CAJAGIRATORIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CajaGiratoria
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *rotuloNombre;
    QLineEdit *editorNombre;
    QLabel *rotuloEdad;
    QSpinBox *cajaGiraDeEdad;
    QLabel *rotuloGrado;
    QDoubleSpinBox *cajaGiraDeGrado;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *btnCaja;

    void setupUi(QDialog *CajaGiratoria)
    {
        if (CajaGiratoria->objectName().isEmpty())
            CajaGiratoria->setObjectName(QString::fromUtf8("CajaGiratoria"));
        CajaGiratoria->resize(214, 150);
        verticalLayout = new QVBoxLayout(CajaGiratoria);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        rotuloNombre = new QLabel(CajaGiratoria);
        rotuloNombre->setObjectName(QString::fromUtf8("rotuloNombre"));

        gridLayout->addWidget(rotuloNombre, 0, 0, 1, 1);

        editorNombre = new QLineEdit(CajaGiratoria);
        editorNombre->setObjectName(QString::fromUtf8("editorNombre"));

        gridLayout->addWidget(editorNombre, 0, 1, 1, 1);

        rotuloEdad = new QLabel(CajaGiratoria);
        rotuloEdad->setObjectName(QString::fromUtf8("rotuloEdad"));

        gridLayout->addWidget(rotuloEdad, 1, 0, 1, 1);

        cajaGiraDeEdad = new QSpinBox(CajaGiratoria);
        cajaGiraDeEdad->setObjectName(QString::fromUtf8("cajaGiraDeEdad"));

        gridLayout->addWidget(cajaGiraDeEdad, 1, 1, 1, 1);

        rotuloGrado = new QLabel(CajaGiratoria);
        rotuloGrado->setObjectName(QString::fromUtf8("rotuloGrado"));

        gridLayout->addWidget(rotuloGrado, 2, 0, 1, 1);

        cajaGiraDeGrado = new QDoubleSpinBox(CajaGiratoria);
        cajaGiraDeGrado->setObjectName(QString::fromUtf8("cajaGiraDeGrado"));

        gridLayout->addWidget(cajaGiraDeGrado, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        btnCaja = new QDialogButtonBox(CajaGiratoria);
        btnCaja->setObjectName(QString::fromUtf8("btnCaja"));
        btnCaja->setStandardButtons(QDialogButtonBox::NoButton);

        verticalLayout->addWidget(btnCaja);


        retranslateUi(CajaGiratoria);

        QMetaObject::connectSlotsByName(CajaGiratoria);
    } // setupUi

    void retranslateUi(QDialog *CajaGiratoria)
    {
        CajaGiratoria->setWindowTitle(QCoreApplication::translate("CajaGiratoria", "CajaGiratoria", nullptr));
        rotuloNombre->setText(QCoreApplication::translate("CajaGiratoria", "Nombre", nullptr));
        rotuloEdad->setText(QCoreApplication::translate("CajaGiratoria", "Edad", nullptr));
        rotuloGrado->setText(QCoreApplication::translate("CajaGiratoria", "Grado", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CajaGiratoria: public Ui_CajaGiratoria {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAJAGIRATORIA_H
