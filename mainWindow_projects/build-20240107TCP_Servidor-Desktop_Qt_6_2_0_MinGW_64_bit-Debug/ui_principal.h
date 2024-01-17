/********************************************************************************
** Form generated from reading UI file 'principal.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_H
#define UI_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Principal
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *etiquetaBien;
    QLineEdit *lineEdit;
    QLabel *etiquetaPuerto;
    QSpinBox *spinBox;
    QWidget *page_2;
    QPushButton *btnEmpezar;
    QPushButton *btnDetener;
    QLabel *etiquetaInfo;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAtras;
    QPushButton *btnAdelante;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnRechazar;
    QPushButton *btnAceptar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Principal)
    {
        if (Principal->objectName().isEmpty())
            Principal->setObjectName(QString::fromUtf8("Principal"));
        Principal->resize(392, 339);
        Principal->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 255, 0);"));
        centralwidget = new QWidget(Principal);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 10, 372, 239));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 50, 331, 121));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        etiquetaBien = new QLabel(layoutWidget);
        etiquetaBien->setObjectName(QString::fromUtf8("etiquetaBien"));

        gridLayout->addWidget(etiquetaBien, 0, 0, 1, 2);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 2, 1, 1);

        etiquetaPuerto = new QLabel(layoutWidget);
        etiquetaPuerto->setObjectName(QString::fromUtf8("etiquetaPuerto"));

        gridLayout->addWidget(etiquetaPuerto, 1, 0, 1, 1);

        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMaximum(9999);

        gridLayout->addWidget(spinBox, 1, 1, 1, 2);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        btnEmpezar = new QPushButton(page_2);
        btnEmpezar->setObjectName(QString::fromUtf8("btnEmpezar"));
        btnEmpezar->setGeometry(QRect(30, 50, 101, 51));
        btnDetener = new QPushButton(page_2);
        btnDetener->setObjectName(QString::fromUtf8("btnDetener"));
        btnDetener->setGeometry(QRect(230, 50, 101, 51));
        etiquetaInfo = new QLabel(page_2);
        etiquetaInfo->setObjectName(QString::fromUtf8("etiquetaInfo"));
        etiquetaInfo->setGeometry(QRect(20, 150, 341, 18));
        stackedWidget->addWidget(page_2);
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 260, 374, 28));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnAtras = new QPushButton(layoutWidget1);
        btnAtras->setObjectName(QString::fromUtf8("btnAtras"));

        horizontalLayout->addWidget(btnAtras);

        btnAdelante = new QPushButton(layoutWidget1);
        btnAdelante->setObjectName(QString::fromUtf8("btnAdelante"));

        horizontalLayout->addWidget(btnAdelante);

        horizontalSpacer = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnRechazar = new QPushButton(layoutWidget1);
        btnRechazar->setObjectName(QString::fromUtf8("btnRechazar"));

        horizontalLayout->addWidget(btnRechazar);

        btnAceptar = new QPushButton(layoutWidget1);
        btnAceptar->setObjectName(QString::fromUtf8("btnAceptar"));

        horizontalLayout->addWidget(btnAceptar);

        Principal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Principal);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 392, 23));
        Principal->setMenuBar(menubar);
        statusbar = new QStatusBar(Principal);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Principal->setStatusBar(statusbar);

        retranslateUi(Principal);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Principal);
    } // setupUi

    void retranslateUi(QMainWindow *Principal)
    {
        Principal->setWindowTitle(QCoreApplication::translate("Principal", "Principal", nullptr));
        etiquetaBien->setText(QCoreApplication::translate("Principal", "Bienvenida:", nullptr));
        etiquetaPuerto->setText(QCoreApplication::translate("Principal", "Puerto:", nullptr));
        btnEmpezar->setText(QCoreApplication::translate("Principal", "Empezar", nullptr));
        btnDetener->setText(QCoreApplication::translate("Principal", "Detener", nullptr));
        etiquetaInfo->setText(QCoreApplication::translate("Principal", "Cerrado.", nullptr));
        btnAtras->setText(QCoreApplication::translate("Principal", "Atr\303\241s", nullptr));
        btnAdelante->setText(QCoreApplication::translate("Principal", "Adelante", nullptr));
        btnRechazar->setText(QCoreApplication::translate("Principal", "Rechazar", nullptr));
        btnAceptar->setText(QCoreApplication::translate("Principal", "Aceptar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Principal: public Ui_Principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_H
