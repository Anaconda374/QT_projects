/********************************************************************************
** Form generated from reading UI file 'dialogdemo2.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGDEMO2_H
#define UI_DIALOGDEMO2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogDemo2
{
public:
    QLabel *rotuloNuevo;
    QPushButton *btnAcceptar;

    void setupUi(QDialog *DialogDemo2)
    {
        if (DialogDemo2->objectName().isEmpty())
            DialogDemo2->setObjectName(QString::fromUtf8("DialogDemo2"));
        DialogDemo2->resize(400, 300);
        rotuloNuevo = new QLabel(DialogDemo2);
        rotuloNuevo->setObjectName(QString::fromUtf8("rotuloNuevo"));
        rotuloNuevo->setGeometry(QRect(90, 70, 211, 41));
        btnAcceptar = new QPushButton(DialogDemo2);
        btnAcceptar->setObjectName(QString::fromUtf8("btnAcceptar"));
        btnAcceptar->setGeometry(QRect(230, 160, 86, 26));

        retranslateUi(DialogDemo2);

        QMetaObject::connectSlotsByName(DialogDemo2);
    } // setupUi

    void retranslateUi(QDialog *DialogDemo2)
    {
        DialogDemo2->setWindowTitle(QCoreApplication::translate("DialogDemo2", "Dialog", nullptr));
        rotuloNuevo->setText(QCoreApplication::translate("DialogDemo2", "Di\303\241logo Nuevo", nullptr));
        btnAcceptar->setText(QCoreApplication::translate("DialogDemo2", "Acceptar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogDemo2: public Ui_DialogDemo2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGDEMO2_H
