/********************************************************************************
** Form generated from reading UI file 'archivosistemapersonalizado.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARCHIVOSISTEMAPERSONALIZADO_H
#define UI_ARCHIVOSISTEMAPERSONALIZADO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ArchivoSistemaPersonalizado
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTreeView *treeView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ArchivoSistemaPersonalizado)
    {
        if (ArchivoSistemaPersonalizado->objectName().isEmpty())
            ArchivoSistemaPersonalizado->setObjectName(QString::fromUtf8("ArchivoSistemaPersonalizado"));
        ArchivoSistemaPersonalizado->resize(537, 386);
        ArchivoSistemaPersonalizado->setStyleSheet(QString::fromUtf8("background-color: rgb(66, 66, 66);\n"
"color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(ArchivoSistemaPersonalizado);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        treeView = new QTreeView(centralwidget);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(252, 252, 252);"));

        gridLayout->addWidget(treeView, 0, 0, 1, 1);

        ArchivoSistemaPersonalizado->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ArchivoSistemaPersonalizado);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 537, 23));
        ArchivoSistemaPersonalizado->setMenuBar(menubar);
        statusbar = new QStatusBar(ArchivoSistemaPersonalizado);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ArchivoSistemaPersonalizado->setStatusBar(statusbar);

        retranslateUi(ArchivoSistemaPersonalizado);

        QMetaObject::connectSlotsByName(ArchivoSistemaPersonalizado);
    } // setupUi

    void retranslateUi(QMainWindow *ArchivoSistemaPersonalizado)
    {
        ArchivoSistemaPersonalizado->setWindowTitle(QCoreApplication::translate("ArchivoSistemaPersonalizado", "ArchivoSistemaPersonalizado", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ArchivoSistemaPersonalizado: public Ui_ArchivoSistemaPersonalizado {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARCHIVOSISTEMAPERSONALIZADO_H
