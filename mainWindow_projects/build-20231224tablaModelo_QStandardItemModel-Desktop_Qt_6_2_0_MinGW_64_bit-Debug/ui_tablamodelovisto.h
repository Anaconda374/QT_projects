/********************************************************************************
** Form generated from reading UI file 'tablamodelovisto.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLAMODELOVISTO_H
#define UI_TABLAMODELOVISTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TablaModeloVisto
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *aceptarBtn;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TablaModeloVisto)
    {
        if (TablaModeloVisto->objectName().isEmpty())
            TablaModeloVisto->setObjectName(QString::fromUtf8("TablaModeloVisto"));
        TablaModeloVisto->resize(488, 294);
        TablaModeloVisto->setStyleSheet(QString::fromUtf8("color: rgb(255, 165, 239);\n"
"background-color: rgb(105, 255, 173);"));
        centralwidget = new QWidget(TablaModeloVisto);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(338, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        aceptarBtn = new QPushButton(centralwidget);
        aceptarBtn->setObjectName(QString::fromUtf8("aceptarBtn"));

        horizontalLayout->addWidget(aceptarBtn);

        horizontalSpacer_2 = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        TablaModeloVisto->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TablaModeloVisto);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 488, 23));
        TablaModeloVisto->setMenuBar(menubar);
        statusbar = new QStatusBar(TablaModeloVisto);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        TablaModeloVisto->setStatusBar(statusbar);

        retranslateUi(TablaModeloVisto);

        QMetaObject::connectSlotsByName(TablaModeloVisto);
    } // setupUi

    void retranslateUi(QMainWindow *TablaModeloVisto)
    {
        TablaModeloVisto->setWindowTitle(QCoreApplication::translate("TablaModeloVisto", "TablaModeloVisto", nullptr));
        aceptarBtn->setText(QCoreApplication::translate("TablaModeloVisto", "Aceptar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TablaModeloVisto: public Ui_TablaModeloVisto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLAMODELOVISTO_H
