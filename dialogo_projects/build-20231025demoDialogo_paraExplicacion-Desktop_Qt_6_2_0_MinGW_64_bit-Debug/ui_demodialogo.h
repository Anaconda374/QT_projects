/********************************************************************************
** Form generated from reading UI file 'demodialogo.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMODIALOGO_H
#define UI_DEMODIALOGO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DemoDialogo
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineaEditor;
    QPushButton *btnAcceptar;

    void setupUi(QDialog *DemoDialogo)
    {
        if (DemoDialogo->objectName().isEmpty())
            DemoDialogo->setObjectName(QString::fromUtf8("DemoDialogo"));
        DemoDialogo->resize(406, 275);
        widget = new QWidget(DemoDialogo);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(130, 110, 127, 60));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineaEditor = new QLineEdit(widget);
        lineaEditor->setObjectName(QString::fromUtf8("lineaEditor"));

        verticalLayout->addWidget(lineaEditor);

        btnAcceptar = new QPushButton(widget);
        btnAcceptar->setObjectName(QString::fromUtf8("btnAcceptar"));

        verticalLayout->addWidget(btnAcceptar);


        retranslateUi(DemoDialogo);

        QMetaObject::connectSlotsByName(DemoDialogo);
    } // setupUi

    void retranslateUi(QDialog *DemoDialogo)
    {
        DemoDialogo->setWindowTitle(QCoreApplication::translate("DemoDialogo", "DemoDialogo", nullptr));
        btnAcceptar->setText(QCoreApplication::translate("DemoDialogo", "Acceptar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DemoDialogo: public Ui_DemoDialogo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMODIALOGO_H
