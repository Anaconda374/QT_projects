/********************************************************************************
** Form generated from reading UI file 'inputformulariovalidacion.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTFORMULARIOVALIDACION_H
#define UI_INPUTFORMULARIOVALIDACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_inputFormularioValidacion
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *rutuloIP;
    QLineEdit *lineaEditorIP;
    QLabel *rutoloNumero;
    QLineEdit *lineaEditorNumero;
    QLabel *rutoluFecha;
    QLineEdit *ineaEditorFecha;
    QLabel *rutuloCorreo;
    QLineEdit *lineaEditorCorreo;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *inputFormularioValidacion)
    {
        if (inputFormularioValidacion->objectName().isEmpty())
            inputFormularioValidacion->setObjectName(QString::fromUtf8("inputFormularioValidacion"));
        inputFormularioValidacion->resize(800, 600);
        layoutWidget = new QWidget(inputFormularioValidacion);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 60, 351, 251));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        rutuloIP = new QLabel(layoutWidget);
        rutuloIP->setObjectName(QString::fromUtf8("rutuloIP"));

        gridLayout->addWidget(rutuloIP, 0, 0, 1, 1);

        lineaEditorIP = new QLineEdit(layoutWidget);
        lineaEditorIP->setObjectName(QString::fromUtf8("lineaEditorIP"));

        gridLayout->addWidget(lineaEditorIP, 0, 1, 1, 1);

        rutoloNumero = new QLabel(layoutWidget);
        rutoloNumero->setObjectName(QString::fromUtf8("rutoloNumero"));

        gridLayout->addWidget(rutoloNumero, 1, 0, 1, 1);

        lineaEditorNumero = new QLineEdit(layoutWidget);
        lineaEditorNumero->setObjectName(QString::fromUtf8("lineaEditorNumero"));

        gridLayout->addWidget(lineaEditorNumero, 1, 1, 1, 1);

        rutoluFecha = new QLabel(layoutWidget);
        rutoluFecha->setObjectName(QString::fromUtf8("rutoluFecha"));

        gridLayout->addWidget(rutoluFecha, 2, 0, 1, 1);

        ineaEditorFecha = new QLineEdit(layoutWidget);
        ineaEditorFecha->setObjectName(QString::fromUtf8("ineaEditorFecha"));

        gridLayout->addWidget(ineaEditorFecha, 2, 1, 1, 1);

        rutuloCorreo = new QLabel(layoutWidget);
        rutuloCorreo->setObjectName(QString::fromUtf8("rutuloCorreo"));

        gridLayout->addWidget(rutuloCorreo, 3, 0, 1, 1);

        lineaEditorCorreo = new QLineEdit(layoutWidget);
        lineaEditorCorreo->setObjectName(QString::fromUtf8("lineaEditorCorreo"));

        gridLayout->addWidget(lineaEditorCorreo, 3, 1, 1, 1);

        buttonBox = new QDialogButtonBox(inputFormularioValidacion);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(200, 370, 166, 26));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(inputFormularioValidacion);

        QMetaObject::connectSlotsByName(inputFormularioValidacion);
    } // setupUi

    void retranslateUi(QDialog *inputFormularioValidacion)
    {
        inputFormularioValidacion->setWindowTitle(QCoreApplication::translate("inputFormularioValidacion", "inputFormularioValidacion", nullptr));
        rutuloIP->setText(QCoreApplication::translate("inputFormularioValidacion", "Direcci\303\263n IP", nullptr));
        lineaEditorIP->setInputMask(QCoreApplication::translate("inputFormularioValidacion", "000.000.0000;_", nullptr));
        rutoloNumero->setText(QCoreApplication::translate("inputFormularioValidacion", "N\303\272mero de tel\303\251fono", nullptr));
        lineaEditorNumero->setInputMask(QCoreApplication::translate("inputFormularioValidacion", "+86 999,9999,9999;-", nullptr));
        rutoluFecha->setText(QCoreApplication::translate("inputFormularioValidacion", "Fecha", nullptr));
        ineaEditorFecha->setInputMask(QCoreApplication::translate("inputFormularioValidacion", "0000/00/00;_", nullptr));
        rutuloCorreo->setText(QCoreApplication::translate("inputFormularioValidacion", "Correo electr\303\263nico", nullptr));
        lineaEditorCorreo->setInputMask(QString());
    } // retranslateUi

};

namespace Ui {
    class inputFormularioValidacion: public Ui_inputFormularioValidacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTFORMULARIOVALIDACION_H
