/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *grpCajaVinculos;
    QVBoxLayout *verticalLayout_2;
    QCommandLinkButton *cmdBtnRegistro;
    QCommandLinkButton *cmdBtnBuscar;
    QGroupBox *grpCajaInfo;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(292, 333);
        verticalLayout_3 = new QVBoxLayout(Dialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        grpCajaVinculos = new QGroupBox(Dialog);
        grpCajaVinculos->setObjectName(QString::fromUtf8("grpCajaVinculos"));
        verticalLayout_2 = new QVBoxLayout(grpCajaVinculos);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        cmdBtnRegistro = new QCommandLinkButton(grpCajaVinculos);
        cmdBtnRegistro->setObjectName(QString::fromUtf8("cmdBtnRegistro"));

        verticalLayout_2->addWidget(cmdBtnRegistro);

        cmdBtnBuscar = new QCommandLinkButton(grpCajaVinculos);
        cmdBtnBuscar->setObjectName(QString::fromUtf8("cmdBtnBuscar"));

        verticalLayout_2->addWidget(cmdBtnBuscar);


        verticalLayout_3->addWidget(grpCajaVinculos);

        grpCajaInfo = new QGroupBox(Dialog);
        grpCajaInfo->setObjectName(QString::fromUtf8("grpCajaInfo"));
        verticalLayout = new QVBoxLayout(grpCajaInfo);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new QTextEdit(grpCajaInfo);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);


        verticalLayout_3->addWidget(grpCajaInfo);

        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setAutoFillBackground(false);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        grpCajaVinculos->setTitle(QCoreApplication::translate("Dialog", "Grupo de vinculos", nullptr));
        cmdBtnRegistro->setText(QCoreApplication::translate("Dialog", "Registro Modo", nullptr));
        cmdBtnRegistro->setDescription(QCoreApplication::translate("Dialog", "descripci\303\263n de Registro", nullptr));
        cmdBtnBuscar->setText(QCoreApplication::translate("Dialog", "Buscar Modo", nullptr));
        grpCajaInfo->setTitle(QCoreApplication::translate("Dialog", "Informacion", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
