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
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnUno;
    QPushButton *btnDos;
    QPushButton *btnTres;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnCuatro;
    QPushButton *btnCinco;
    QPushButton *btnSeis;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnSiete;
    QPushButton *btnOcho;
    QPushButton *btnNueve;
    QPushButton *btnCero;
    QTextEdit *textoEditor;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btnAlmacenar;
    QPushButton *btnVerificar;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(346, 268);
        verticalLayout_3 = new QVBoxLayout(Dialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnUno = new QPushButton(Dialog);
        btnUno->setObjectName(QString::fromUtf8("btnUno"));

        horizontalLayout->addWidget(btnUno);

        btnDos = new QPushButton(Dialog);
        btnDos->setObjectName(QString::fromUtf8("btnDos"));

        horizontalLayout->addWidget(btnDos);

        btnTres = new QPushButton(Dialog);
        btnTres->setObjectName(QString::fromUtf8("btnTres"));

        horizontalLayout->addWidget(btnTres);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btnCuatro = new QPushButton(Dialog);
        btnCuatro->setObjectName(QString::fromUtf8("btnCuatro"));

        horizontalLayout_2->addWidget(btnCuatro);

        btnCinco = new QPushButton(Dialog);
        btnCinco->setObjectName(QString::fromUtf8("btnCinco"));

        horizontalLayout_2->addWidget(btnCinco);

        btnSeis = new QPushButton(Dialog);
        btnSeis->setObjectName(QString::fromUtf8("btnSeis"));

        horizontalLayout_2->addWidget(btnSeis);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btnSiete = new QPushButton(Dialog);
        btnSiete->setObjectName(QString::fromUtf8("btnSiete"));

        horizontalLayout_3->addWidget(btnSiete);

        btnOcho = new QPushButton(Dialog);
        btnOcho->setObjectName(QString::fromUtf8("btnOcho"));

        horizontalLayout_3->addWidget(btnOcho);

        btnNueve = new QPushButton(Dialog);
        btnNueve->setObjectName(QString::fromUtf8("btnNueve"));

        horizontalLayout_3->addWidget(btnNueve);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        btnCero = new QPushButton(Dialog);
        btnCero->setObjectName(QString::fromUtf8("btnCero"));

        verticalLayout_2->addWidget(btnCero);


        verticalLayout_3->addLayout(verticalLayout_2);

        textoEditor = new QTextEdit(Dialog);
        textoEditor->setObjectName(QString::fromUtf8("textoEditor"));

        verticalLayout_3->addWidget(textoEditor);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        btnAlmacenar = new QPushButton(Dialog);
        btnAlmacenar->setObjectName(QString::fromUtf8("btnAlmacenar"));

        horizontalLayout_4->addWidget(btnAlmacenar);

        btnVerificar = new QPushButton(Dialog);
        btnVerificar->setObjectName(QString::fromUtf8("btnVerificar"));

        horizontalLayout_4->addWidget(btnVerificar);


        verticalLayout_3->addLayout(horizontalLayout_4);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        btnUno->setText(QCoreApplication::translate("Dialog", "1", nullptr));
        btnDos->setText(QCoreApplication::translate("Dialog", "2", nullptr));
        btnTres->setText(QCoreApplication::translate("Dialog", "3", nullptr));
        btnCuatro->setText(QCoreApplication::translate("Dialog", "4", nullptr));
        btnCinco->setText(QCoreApplication::translate("Dialog", "5", nullptr));
        btnSeis->setText(QCoreApplication::translate("Dialog", "6", nullptr));
        btnSiete->setText(QCoreApplication::translate("Dialog", "7", nullptr));
        btnOcho->setText(QCoreApplication::translate("Dialog", "8", nullptr));
        btnNueve->setText(QCoreApplication::translate("Dialog", "9", nullptr));
        btnCero->setText(QCoreApplication::translate("Dialog", "0", nullptr));
        btnAlmacenar->setText(QCoreApplication::translate("Dialog", "Almacenar", nullptr));
        btnVerificar->setText(QCoreApplication::translate("Dialog", "Verificar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
