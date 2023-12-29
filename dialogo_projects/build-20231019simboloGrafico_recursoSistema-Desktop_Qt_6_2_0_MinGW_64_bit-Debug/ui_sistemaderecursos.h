/********************************************************************************
** Form generated from reading UI file 'sistemaderecursos.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SISTEMADERECURSOS_H
#define UI_SISTEMADERECURSOS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sistemaDeRecursos
{
public:
    QWidget *centralwidget;
    QPlainTextEdit *plainTextEdit;
    QDialogButtonBox *btnCaja;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnNuevo;
    QPushButton *btnAlmacenar;
    QPushButton *btnAbrir;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *sistemaDeRecursos)
    {
        if (sistemaDeRecursos->objectName().isEmpty())
            sistemaDeRecursos->setObjectName(QString::fromUtf8("sistemaDeRecursos"));
        sistemaDeRecursos->resize(297, 326);
        centralwidget = new QWidget(sistemaDeRecursos);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 40, 256, 192));
        btnCaja = new QDialogButtonBox(centralwidget);
        btnCaja->setObjectName(QString::fromUtf8("btnCaja"));
        btnCaja->setGeometry(QRect(100, 240, 166, 26));
        btnCaja->setStandardButtons(QDialogButtonBox::NoButton);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(11, 9, 276, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnNuevo = new QPushButton(widget);
        btnNuevo->setObjectName(QString::fromUtf8("btnNuevo"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/simbolos/simbolos_graficos/file.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnNuevo->setIcon(icon);

        horizontalLayout->addWidget(btnNuevo);

        btnAlmacenar = new QPushButton(widget);
        btnAlmacenar->setObjectName(QString::fromUtf8("btnAlmacenar"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/simbolos/simbolos_graficos/disk.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAlmacenar->setIcon(icon1);

        horizontalLayout->addWidget(btnAlmacenar);

        btnAbrir = new QPushButton(widget);
        btnAbrir->setObjectName(QString::fromUtf8("btnAbrir"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/simbolos/simbolos_graficos/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAbrir->setIcon(icon2);

        horizontalLayout->addWidget(btnAbrir);

        sistemaDeRecursos->setCentralWidget(centralwidget);
        menubar = new QMenuBar(sistemaDeRecursos);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 297, 23));
        sistemaDeRecursos->setMenuBar(menubar);
        statusbar = new QStatusBar(sistemaDeRecursos);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        sistemaDeRecursos->setStatusBar(statusbar);

        retranslateUi(sistemaDeRecursos);

        QMetaObject::connectSlotsByName(sistemaDeRecursos);
    } // setupUi

    void retranslateUi(QMainWindow *sistemaDeRecursos)
    {
        sistemaDeRecursos->setWindowTitle(QCoreApplication::translate("sistemaDeRecursos", "sistemaDeRecursos", nullptr));
        btnNuevo->setText(QCoreApplication::translate("sistemaDeRecursos", "Nuevo", nullptr));
        btnAlmacenar->setText(QCoreApplication::translate("sistemaDeRecursos", "Almacenar", nullptr));
        btnAbrir->setText(QCoreApplication::translate("sistemaDeRecursos", "Abrir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sistemaDeRecursos: public Ui_sistemaDeRecursos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SISTEMADERECURSOS_H
