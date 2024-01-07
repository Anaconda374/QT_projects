/********************************************************************************
** Form generated from reading UI file 'calculadora.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULADORA_H
#define UI_CALCULADORA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculadora
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QGridLayout *numeroPanel;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnNueva;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnLimpiar;
    QPushButton *btnAceptar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculadora)
    {
        if (Calculadora->objectName().isEmpty())
            Calculadora->setObjectName(QString::fromUtf8("Calculadora"));
        Calculadora->resize(476, 422);
        Calculadora->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 213);\n"
"color: rgb(56, 56, 56);"));
        centralwidget = new QWidget(Calculadora);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        numeroPanel = new QGridLayout();
        numeroPanel->setObjectName(QString::fromUtf8("numeroPanel"));
        numeroPanel->setSizeConstraint(QLayout::SetFixedSize);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        numeroPanel->addItem(verticalSpacer, 0, 0, 1, 1);


        verticalLayout->addLayout(numeroPanel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnNueva = new QPushButton(centralwidget);
        btnNueva->setObjectName(QString::fromUtf8("btnNueva"));

        horizontalLayout->addWidget(btnNueva);

        horizontalSpacer = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnLimpiar = new QPushButton(centralwidget);
        btnLimpiar->setObjectName(QString::fromUtf8("btnLimpiar"));

        horizontalLayout->addWidget(btnLimpiar);

        btnAceptar = new QPushButton(centralwidget);
        btnAceptar->setObjectName(QString::fromUtf8("btnAceptar"));

        horizontalLayout->addWidget(btnAceptar);


        verticalLayout->addLayout(horizontalLayout);

        Calculadora->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculadora);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 476, 23));
        Calculadora->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculadora);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Calculadora->setStatusBar(statusbar);

        retranslateUi(Calculadora);

        QMetaObject::connectSlotsByName(Calculadora);
    } // setupUi

    void retranslateUi(QMainWindow *Calculadora)
    {
        Calculadora->setWindowTitle(QCoreApplication::translate("Calculadora", "Calculadora", nullptr));
        btnNueva->setText(QCoreApplication::translate("Calculadora", "Nueva", nullptr));
        btnLimpiar->setText(QCoreApplication::translate("Calculadora", "Limpiar", nullptr));
        btnAceptar->setText(QCoreApplication::translate("Calculadora", "Aceptar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculadora: public Ui_Calculadora {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULADORA_H
