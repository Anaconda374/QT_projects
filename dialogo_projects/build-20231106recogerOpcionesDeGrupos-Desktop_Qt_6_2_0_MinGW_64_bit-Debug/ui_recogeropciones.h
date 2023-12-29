/********************************************************************************
** Form generated from reading UI file 'recogeropciones.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECOGEROPCIONES_H
#define UI_RECOGEROPCIONES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RecogerOpciones
{
public:
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *grpInfo;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QLabel *etiquetaNombre;
    QLineEdit *lineaEditorNombre;
    QLabel *etiquetaCorreo;
    QLineEdit *lineaEditorCorreo;
    QHBoxLayout *horizontalLayout;
    QGroupBox *grpComida;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *marcarHambu;
    QCheckBox *marcarFideos;
    QCheckBox *marcarPan;
    QCheckBox *marcarHuevo;
    QGroupBox *grpDeporte;
    QVBoxLayout *verticalLayout;
    QCheckBox *marcarNadar;
    QCheckBox *marcarCorrer;
    QCheckBox *marcarBaloncesto;
    QCheckBox *marcarBadminton;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnRechazar;
    QPushButton *btnAcceptar;

    void setupUi(QDialog *RecogerOpciones)
    {
        if (RecogerOpciones->objectName().isEmpty())
            RecogerOpciones->setObjectName(QString::fromUtf8("RecogerOpciones"));
        RecogerOpciones->resize(325, 380);
        formLayout = new QFormLayout(RecogerOpciones);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        grpInfo = new QGroupBox(RecogerOpciones);
        grpInfo->setObjectName(QString::fromUtf8("grpInfo"));
        verticalLayout_3 = new QVBoxLayout(grpInfo);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        etiquetaNombre = new QLabel(grpInfo);
        etiquetaNombre->setObjectName(QString::fromUtf8("etiquetaNombre"));

        gridLayout->addWidget(etiquetaNombre, 0, 0, 1, 1);

        lineaEditorNombre = new QLineEdit(grpInfo);
        lineaEditorNombre->setObjectName(QString::fromUtf8("lineaEditorNombre"));

        gridLayout->addWidget(lineaEditorNombre, 0, 1, 1, 1);

        etiquetaCorreo = new QLabel(grpInfo);
        etiquetaCorreo->setObjectName(QString::fromUtf8("etiquetaCorreo"));

        gridLayout->addWidget(etiquetaCorreo, 1, 0, 1, 1);

        lineaEditorCorreo = new QLineEdit(grpInfo);
        lineaEditorCorreo->setObjectName(QString::fromUtf8("lineaEditorCorreo"));

        gridLayout->addWidget(lineaEditorCorreo, 1, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout);


        verticalLayout_4->addWidget(grpInfo);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        grpComida = new QGroupBox(RecogerOpciones);
        grpComida->setObjectName(QString::fromUtf8("grpComida"));
        verticalLayout_2 = new QVBoxLayout(grpComida);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        marcarHambu = new QCheckBox(grpComida);
        marcarHambu->setObjectName(QString::fromUtf8("marcarHambu"));

        verticalLayout_2->addWidget(marcarHambu);

        marcarFideos = new QCheckBox(grpComida);
        marcarFideos->setObjectName(QString::fromUtf8("marcarFideos"));

        verticalLayout_2->addWidget(marcarFideos);

        marcarPan = new QCheckBox(grpComida);
        marcarPan->setObjectName(QString::fromUtf8("marcarPan"));

        verticalLayout_2->addWidget(marcarPan);

        marcarHuevo = new QCheckBox(grpComida);
        marcarHuevo->setObjectName(QString::fromUtf8("marcarHuevo"));

        verticalLayout_2->addWidget(marcarHuevo);


        horizontalLayout->addWidget(grpComida);

        grpDeporte = new QGroupBox(RecogerOpciones);
        grpDeporte->setObjectName(QString::fromUtf8("grpDeporte"));
        verticalLayout = new QVBoxLayout(grpDeporte);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        marcarNadar = new QCheckBox(grpDeporte);
        marcarNadar->setObjectName(QString::fromUtf8("marcarNadar"));

        verticalLayout->addWidget(marcarNadar);

        marcarCorrer = new QCheckBox(grpDeporte);
        marcarCorrer->setObjectName(QString::fromUtf8("marcarCorrer"));

        verticalLayout->addWidget(marcarCorrer);

        marcarBaloncesto = new QCheckBox(grpDeporte);
        marcarBaloncesto->setObjectName(QString::fromUtf8("marcarBaloncesto"));

        verticalLayout->addWidget(marcarBaloncesto);

        marcarBadminton = new QCheckBox(grpDeporte);
        marcarBadminton->setObjectName(QString::fromUtf8("marcarBadminton"));

        verticalLayout->addWidget(marcarBadminton);


        horizontalLayout->addWidget(grpDeporte);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout_5->addLayout(verticalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btnRechazar = new QPushButton(RecogerOpciones);
        btnRechazar->setObjectName(QString::fromUtf8("btnRechazar"));

        horizontalLayout_2->addWidget(btnRechazar);

        btnAcceptar = new QPushButton(RecogerOpciones);
        btnAcceptar->setObjectName(QString::fromUtf8("btnAcceptar"));

        horizontalLayout_2->addWidget(btnAcceptar);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_5->addLayout(horizontalLayout_3);


        formLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout_5);


        retranslateUi(RecogerOpciones);

        QMetaObject::connectSlotsByName(RecogerOpciones);
    } // setupUi

    void retranslateUi(QDialog *RecogerOpciones)
    {
        RecogerOpciones->setWindowTitle(QCoreApplication::translate("RecogerOpciones", "RecogerOpciones", nullptr));
        grpInfo->setTitle(QCoreApplication::translate("RecogerOpciones", "Informaci\303\263n", nullptr));
        etiquetaNombre->setText(QCoreApplication::translate("RecogerOpciones", "Nombre :", nullptr));
        etiquetaCorreo->setText(QCoreApplication::translate("RecogerOpciones", "E_Correo :", nullptr));
        grpComida->setTitle(QCoreApplication::translate("RecogerOpciones", "Comida", nullptr));
        marcarHambu->setText(QCoreApplication::translate("RecogerOpciones", "Hamburguesa", nullptr));
        marcarFideos->setText(QCoreApplication::translate("RecogerOpciones", "Fideos", nullptr));
        marcarPan->setText(QCoreApplication::translate("RecogerOpciones", "Pan", nullptr));
        marcarHuevo->setText(QCoreApplication::translate("RecogerOpciones", "Huevo", nullptr));
        grpDeporte->setTitle(QCoreApplication::translate("RecogerOpciones", "Deporte", nullptr));
        marcarNadar->setText(QCoreApplication::translate("RecogerOpciones", "Nadar", nullptr));
        marcarCorrer->setText(QCoreApplication::translate("RecogerOpciones", "Correr", nullptr));
        marcarBaloncesto->setText(QCoreApplication::translate("RecogerOpciones", "Baloncesto", nullptr));
        marcarBadminton->setText(QCoreApplication::translate("RecogerOpciones", "B\303\241dminton", nullptr));
        btnRechazar->setText(QCoreApplication::translate("RecogerOpciones", "Rechazar", nullptr));
        btnAcceptar->setText(QCoreApplication::translate("RecogerOpciones", "Acceptar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RecogerOpciones: public Ui_RecogerOpciones {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECOGEROPCIONES_H
