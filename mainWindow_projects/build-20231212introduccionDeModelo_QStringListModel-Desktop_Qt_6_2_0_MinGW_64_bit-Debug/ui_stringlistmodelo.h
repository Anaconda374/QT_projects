/********************************************************************************
** Form generated from reading UI file 'stringlistmodelo.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STRINGLISTMODELO_H
#define UI_STRINGLISTMODELO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StringListModelo
{
public:
    QWidget *centralwidget;
    QListView *listView;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnAceptar;
    QPushButton *btnRechazar;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAnadir;
    QPushButton *btnBorrar;
    QSpacerItem *horizontalSpacer_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *StringListModelo)
    {
        if (StringListModelo->objectName().isEmpty())
            StringListModelo->setObjectName(QString::fromUtf8("StringListModelo"));
        StringListModelo->resize(506, 382);
        StringListModelo->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(2, 2, 2);"));
        centralwidget = new QWidget(StringListModelo);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        listView = new QListView(centralwidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(10, 10, 481, 231));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(12, 290, 482, 28));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(308, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnAceptar = new QPushButton(widget);
        btnAceptar->setObjectName(QString::fromUtf8("btnAceptar"));

        horizontalLayout_2->addWidget(btnAceptar);

        btnRechazar = new QPushButton(widget);
        btnRechazar->setObjectName(QString::fromUtf8("btnRechazar"));

        horizontalLayout_2->addWidget(btnRechazar);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 250, 488, 30));
        horizontalLayout_3 = new QHBoxLayout(widget1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(148, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnAnadir = new QPushButton(widget1);
        btnAnadir->setObjectName(QString::fromUtf8("btnAnadir"));

        horizontalLayout->addWidget(btnAnadir);

        btnBorrar = new QPushButton(widget1);
        btnBorrar->setObjectName(QString::fromUtf8("btnBorrar"));

        horizontalLayout->addWidget(btnBorrar);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalSpacer_3 = new QSpacerItem(158, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        StringListModelo->setCentralWidget(centralwidget);
        menubar = new QMenuBar(StringListModelo);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 506, 23));
        StringListModelo->setMenuBar(menubar);
        statusbar = new QStatusBar(StringListModelo);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        StringListModelo->setStatusBar(statusbar);

        retranslateUi(StringListModelo);

        QMetaObject::connectSlotsByName(StringListModelo);
    } // setupUi

    void retranslateUi(QMainWindow *StringListModelo)
    {
        StringListModelo->setWindowTitle(QCoreApplication::translate("StringListModelo", "StringListModelo", nullptr));
        btnAceptar->setText(QCoreApplication::translate("StringListModelo", "Aceptar", nullptr));
        btnRechazar->setText(QCoreApplication::translate("StringListModelo", "Rechazar", nullptr));
        btnAnadir->setText(QCoreApplication::translate("StringListModelo", "A\303\261adir", nullptr));
        btnBorrar->setText(QCoreApplication::translate("StringListModelo", "Borrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StringListModelo: public Ui_StringListModelo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STRINGLISTMODELO_H
