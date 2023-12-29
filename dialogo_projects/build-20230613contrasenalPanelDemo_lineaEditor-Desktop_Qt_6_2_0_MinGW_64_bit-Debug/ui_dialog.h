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
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *textoRotuno;
    QLineEdit *lineaEditor;
    QHBoxLayout *horizontalLayout;
    QLabel *sincRotulo;
    QLineEdit *lineaSinc;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QComboBox *comboEcho;
    QCheckBox *marcaPermitir;
    QCheckBox *marcaSoloLeer;
    QCheckBox *marcaLimpiar;
    QPushButton *btnCometer;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(265, 392);
        verticalLayout_4 = new QVBoxLayout(Dialog);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        textoRotuno = new QLabel(Dialog);
        textoRotuno->setObjectName(QString::fromUtf8("textoRotuno"));

        horizontalLayout_2->addWidget(textoRotuno);

        lineaEditor = new QLineEdit(Dialog);
        lineaEditor->setObjectName(QString::fromUtf8("lineaEditor"));

        horizontalLayout_2->addWidget(lineaEditor);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        sincRotulo = new QLabel(Dialog);
        sincRotulo->setObjectName(QString::fromUtf8("sincRotulo"));

        horizontalLayout->addWidget(sincRotulo);

        lineaSinc = new QLineEdit(Dialog);
        lineaSinc->setObjectName(QString::fromUtf8("lineaSinc"));
        lineaSinc->setEnabled(true);

        horizontalLayout->addWidget(lineaSinc);


        verticalLayout_3->addLayout(horizontalLayout);

        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        comboEcho = new QComboBox(groupBox);
        comboEcho->setObjectName(QString::fromUtf8("comboEcho"));

        verticalLayout->addWidget(comboEcho);

        marcaPermitir = new QCheckBox(groupBox);
        marcaPermitir->setObjectName(QString::fromUtf8("marcaPermitir"));

        verticalLayout->addWidget(marcaPermitir);

        marcaSoloLeer = new QCheckBox(groupBox);
        marcaSoloLeer->setObjectName(QString::fromUtf8("marcaSoloLeer"));

        verticalLayout->addWidget(marcaSoloLeer);

        marcaLimpiar = new QCheckBox(groupBox);
        marcaLimpiar->setObjectName(QString::fromUtf8("marcaLimpiar"));

        verticalLayout->addWidget(marcaLimpiar);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addWidget(groupBox);


        verticalLayout_4->addLayout(verticalLayout_3);

        btnCometer = new QPushButton(Dialog);
        btnCometer->setObjectName(QString::fromUtf8("btnCometer"));

        verticalLayout_4->addWidget(btnCometer);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        textoRotuno->setText(QCoreApplication::translate("Dialog", "Texto", nullptr));
        sincRotulo->setText(QCoreApplication::translate("Dialog", "Sinc", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Dialog", "GroupBox", nullptr));
        marcaPermitir->setText(QCoreApplication::translate("Dialog", "Permitir escribe", nullptr));
        marcaSoloLeer->setText(QCoreApplication::translate("Dialog", "Solo Leer", nullptr));
        marcaLimpiar->setText(QCoreApplication::translate("Dialog", "Limpiar", nullptr));
        btnCometer->setText(QCoreApplication::translate("Dialog", "Cometer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
