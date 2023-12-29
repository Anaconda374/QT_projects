/********************************************************************************
** Form generated from reading UI file 'demoapp.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMOAPP_H
#define UI_DEMOAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_demoApp
{
public:
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout;
    QLabel *rotuloIcono;
    QLineEdit *lineaEditor;
    QSpacerItem *verticalSpacer;
    QPushButton *btnEmpujar;

    void setupUi(QDialog *demoApp)
    {
        if (demoApp->objectName().isEmpty())
            demoApp->setObjectName(QString::fromUtf8("demoApp"));
        demoApp->resize(154, 200);
        formLayout = new QFormLayout(demoApp);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        rotuloIcono = new QLabel(demoApp);
        rotuloIcono->setObjectName(QString::fromUtf8("rotuloIcono"));

        verticalLayout->addWidget(rotuloIcono);

        lineaEditor = new QLineEdit(demoApp);
        lineaEditor->setObjectName(QString::fromUtf8("lineaEditor"));

        verticalLayout->addWidget(lineaEditor);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        btnEmpujar = new QPushButton(demoApp);
        btnEmpujar->setObjectName(QString::fromUtf8("btnEmpujar"));

        verticalLayout->addWidget(btnEmpujar);


        formLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout);


        retranslateUi(demoApp);

        QMetaObject::connectSlotsByName(demoApp);
    } // setupUi

    void retranslateUi(QDialog *demoApp)
    {
        demoApp->setWindowTitle(QCoreApplication::translate("demoApp", "demoApp", nullptr));
        rotuloIcono->setText(QCoreApplication::translate("demoApp", "X", nullptr));
        btnEmpujar->setText(QCoreApplication::translate("demoApp", "Acceptar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class demoApp: public Ui_demoApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMOAPP_H
