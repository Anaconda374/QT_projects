/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboCaja;
    QPushButton *btnAnadir;
    QListWidget *listaArtilugio;
    QDialogButtonBox *btnCaja;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(510, 473);
        widget = new QWidget(Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(82, 54, 260, 236));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboCaja = new QComboBox(widget);
        comboCaja->setObjectName(QString::fromUtf8("comboCaja"));
        comboCaja->setEnabled(false);
        comboCaja->setEditable(true);

        horizontalLayout->addWidget(comboCaja);

        btnAnadir = new QPushButton(widget);
        btnAnadir->setObjectName(QString::fromUtf8("btnAnadir"));

        horizontalLayout->addWidget(btnAnadir);


        verticalLayout->addLayout(horizontalLayout);

        listaArtilugio = new QListWidget(widget);
        listaArtilugio->setObjectName(QString::fromUtf8("listaArtilugio"));
        listaArtilugio->setSelectionMode(QAbstractItemView::ExtendedSelection);

        verticalLayout->addWidget(listaArtilugio);


        verticalLayout_2->addLayout(verticalLayout);

        btnCaja = new QDialogButtonBox(widget);
        btnCaja->setObjectName(QString::fromUtf8("btnCaja"));

        verticalLayout_2->addWidget(btnCaja);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        btnAnadir->setText(QCoreApplication::translate("Dialog", "Anadir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
