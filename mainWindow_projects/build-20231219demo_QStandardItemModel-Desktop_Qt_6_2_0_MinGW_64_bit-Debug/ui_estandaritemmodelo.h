/********************************************************************************
** Form generated from reading UI file 'estandaritemmodelo.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ESTANDARITEMMODELO_H
#define UI_ESTANDARITEMMODELO_H

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

class Ui_EstandarItemModelo
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTreeView *treeView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EstandarItemModelo)
    {
        if (EstandarItemModelo->objectName().isEmpty())
            EstandarItemModelo->setObjectName(QString::fromUtf8("EstandarItemModelo"));
        EstandarItemModelo->resize(508, 421);
        EstandarItemModelo->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(12, 12, 12);"));
        centralwidget = new QWidget(EstandarItemModelo);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        treeView = new QTreeView(centralwidget);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        gridLayout->addWidget(treeView, 0, 0, 1, 1);

        EstandarItemModelo->setCentralWidget(centralwidget);
        menubar = new QMenuBar(EstandarItemModelo);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 508, 23));
        EstandarItemModelo->setMenuBar(menubar);
        statusbar = new QStatusBar(EstandarItemModelo);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        EstandarItemModelo->setStatusBar(statusbar);

        retranslateUi(EstandarItemModelo);

        QMetaObject::connectSlotsByName(EstandarItemModelo);
    } // setupUi

    void retranslateUi(QMainWindow *EstandarItemModelo)
    {
        EstandarItemModelo->setWindowTitle(QCoreApplication::translate("EstandarItemModelo", "EstandarItemModelo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EstandarItemModelo: public Ui_EstandarItemModelo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ESTANDARITEMMODELO_H
