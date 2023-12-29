/********************************************************************************
** Form generated from reading UI file 'principalvantana.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPALVANTANA_H
#define UI_PRINCIPALVANTANA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PrincipalVantana
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *planoEditor;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnEditar;
    QPushButton *btnRechzar;
    QPushButton *btnAcceptar;

    void setupUi(QDialog *PrincipalVantana)
    {
        if (PrincipalVantana->objectName().isEmpty())
            PrincipalVantana->setObjectName(QString::fromUtf8("PrincipalVantana"));
        PrincipalVantana->resize(423, 303);
        formLayout = new QFormLayout(PrincipalVantana);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(PrincipalVantana);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setUnderline(true);
        label->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        planoEditor = new QPlainTextEdit(PrincipalVantana);
        planoEditor->setObjectName(QString::fromUtf8("planoEditor"));

        verticalLayout->addWidget(planoEditor);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnEditar = new QPushButton(PrincipalVantana);
        btnEditar->setObjectName(QString::fromUtf8("btnEditar"));

        horizontalLayout->addWidget(btnEditar);

        btnRechzar = new QPushButton(PrincipalVantana);
        btnRechzar->setObjectName(QString::fromUtf8("btnRechzar"));

        horizontalLayout->addWidget(btnRechzar);

        btnAcceptar = new QPushButton(PrincipalVantana);
        btnAcceptar->setObjectName(QString::fromUtf8("btnAcceptar"));

        horizontalLayout->addWidget(btnAcceptar);


        verticalLayout->addLayout(horizontalLayout);


        formLayout->setLayout(1, QFormLayout::LabelRole, verticalLayout);


        retranslateUi(PrincipalVantana);

        QMetaObject::connectSlotsByName(PrincipalVantana);
    } // setupUi

    void retranslateUi(QDialog *PrincipalVantana)
    {
        PrincipalVantana->setWindowTitle(QCoreApplication::translate("PrincipalVantana", "PrincipalVantana", nullptr));
        label->setText(QCoreApplication::translate("PrincipalVantana", "Principal Vantana", nullptr));
        btnEditar->setText(QCoreApplication::translate("PrincipalVantana", "Editar", nullptr));
        btnRechzar->setText(QCoreApplication::translate("PrincipalVantana", "Rechazar", nullptr));
        btnAcceptar->setText(QCoreApplication::translate("PrincipalVantana", "Acceptar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PrincipalVantana: public Ui_PrincipalVantana {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPALVANTANA_H
