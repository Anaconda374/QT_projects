/********************************************************************************
** Form generated from reading UI file 'charlarvantana.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARLARVANTANA_H
#define UI_CHARLARVANTANA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CharlarVantana
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *etiServidor;
    QLineEdit *ipEditor;
    QLabel *etiPuerto;
    QLineEdit *puertoEditor;
    QPushButton *btnConectar;
    QPushButton *btnDesconectar;
    QListView *mensajeVisto;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *textoEditor;
    QPushButton *btnMandar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CharlarVantana)
    {
        if (CharlarVantana->objectName().isEmpty())
            CharlarVantana->setObjectName(QString::fromUtf8("CharlarVantana"));
        CharlarVantana->resize(562, 417);
        CharlarVantana->setStyleSheet(QString::fromUtf8("color:rgb(0, 255, 0);\n"
"background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(CharlarVantana);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        etiServidor = new QLabel(centralwidget);
        etiServidor->setObjectName(QString::fromUtf8("etiServidor"));

        gridLayout->addWidget(etiServidor, 0, 0, 1, 1);

        ipEditor = new QLineEdit(centralwidget);
        ipEditor->setObjectName(QString::fromUtf8("ipEditor"));

        gridLayout->addWidget(ipEditor, 0, 1, 1, 1);

        etiPuerto = new QLabel(centralwidget);
        etiPuerto->setObjectName(QString::fromUtf8("etiPuerto"));

        gridLayout->addWidget(etiPuerto, 0, 2, 1, 1);

        puertoEditor = new QLineEdit(centralwidget);
        puertoEditor->setObjectName(QString::fromUtf8("puertoEditor"));

        gridLayout->addWidget(puertoEditor, 0, 3, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        btnConectar = new QPushButton(centralwidget);
        btnConectar->setObjectName(QString::fromUtf8("btnConectar"));

        horizontalLayout->addWidget(btnConectar);

        btnDesconectar = new QPushButton(centralwidget);
        btnDesconectar->setObjectName(QString::fromUtf8("btnDesconectar"));

        horizontalLayout->addWidget(btnDesconectar);


        verticalLayout->addLayout(horizontalLayout);

        mensajeVisto = new QListView(centralwidget);
        mensajeVisto->setObjectName(QString::fromUtf8("mensajeVisto"));

        verticalLayout->addWidget(mensajeVisto);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        textoEditor = new QLineEdit(centralwidget);
        textoEditor->setObjectName(QString::fromUtf8("textoEditor"));

        horizontalLayout_2->addWidget(textoEditor);

        btnMandar = new QPushButton(centralwidget);
        btnMandar->setObjectName(QString::fromUtf8("btnMandar"));

        horizontalLayout_2->addWidget(btnMandar);


        verticalLayout->addLayout(horizontalLayout_2);

        CharlarVantana->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CharlarVantana);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 562, 23));
        CharlarVantana->setMenuBar(menubar);
        statusbar = new QStatusBar(CharlarVantana);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CharlarVantana->setStatusBar(statusbar);

        retranslateUi(CharlarVantana);

        QMetaObject::connectSlotsByName(CharlarVantana);
    } // setupUi

    void retranslateUi(QMainWindow *CharlarVantana)
    {
        CharlarVantana->setWindowTitle(QCoreApplication::translate("CharlarVantana", "CharlarVantana", nullptr));
        etiServidor->setText(QCoreApplication::translate("CharlarVantana", "Servidor", nullptr));
        ipEditor->setText(QCoreApplication::translate("CharlarVantana", "127.0.0.1", nullptr));
        etiPuerto->setText(QCoreApplication::translate("CharlarVantana", "Puerto", nullptr));
        btnConectar->setText(QCoreApplication::translate("CharlarVantana", "Conectar", nullptr));
        btnDesconectar->setText(QCoreApplication::translate("CharlarVantana", "Desconectar", nullptr));
        btnMandar->setText(QCoreApplication::translate("CharlarVantana", "Mandar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CharlarVantana: public Ui_CharlarVantana {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARLARVANTANA_H
