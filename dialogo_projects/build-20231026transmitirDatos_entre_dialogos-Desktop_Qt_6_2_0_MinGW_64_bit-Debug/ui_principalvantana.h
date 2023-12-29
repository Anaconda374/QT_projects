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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrincipalVantana
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *etiqueta;
    QLineEdit *lineaEditor;
    QPushButton *btnElegir;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnAcceptar;
    QPushButton *btnRechazar;

    void setupUi(QDialog *PrincipalVantana)
    {
        if (PrincipalVantana->objectName().isEmpty())
            PrincipalVantana->setObjectName(QString::fromUtf8("PrincipalVantana"));
        PrincipalVantana->resize(393, 262);
        widget = new QWidget(PrincipalVantana);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 361, 71));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        etiqueta = new QLabel(widget);
        etiqueta->setObjectName(QString::fromUtf8("etiqueta"));

        horizontalLayout->addWidget(etiqueta);

        lineaEditor = new QLineEdit(widget);
        lineaEditor->setObjectName(QString::fromUtf8("lineaEditor"));

        horizontalLayout->addWidget(lineaEditor);

        btnElegir = new QPushButton(widget);
        btnElegir->setObjectName(QString::fromUtf8("btnElegir"));

        horizontalLayout->addWidget(btnElegir);

        widget1 = new QWidget(PrincipalVantana);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 224, 351, 28));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnAcceptar = new QPushButton(widget1);
        btnAcceptar->setObjectName(QString::fromUtf8("btnAcceptar"));

        horizontalLayout_2->addWidget(btnAcceptar);

        btnRechazar = new QPushButton(widget1);
        btnRechazar->setObjectName(QString::fromUtf8("btnRechazar"));

        horizontalLayout_2->addWidget(btnRechazar);


        retranslateUi(PrincipalVantana);

        QMetaObject::connectSlotsByName(PrincipalVantana);
    } // setupUi

    void retranslateUi(QDialog *PrincipalVantana)
    {
        PrincipalVantana->setWindowTitle(QCoreApplication::translate("PrincipalVantana", "PrincipalVantana", nullptr));
        etiqueta->setText(QCoreApplication::translate("PrincipalVantana", "X", nullptr));
        btnElegir->setText(QCoreApplication::translate("PrincipalVantana", "Elegir", nullptr));
        btnAcceptar->setText(QCoreApplication::translate("PrincipalVantana", "Acceptar", nullptr));
        btnRechazar->setText(QCoreApplication::translate("PrincipalVantana", "Rechazar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PrincipalVantana: public Ui_PrincipalVantana {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPALVANTANA_H
