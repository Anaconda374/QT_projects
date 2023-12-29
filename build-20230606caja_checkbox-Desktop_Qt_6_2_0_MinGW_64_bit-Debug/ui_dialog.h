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
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *menu;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnImprimirTodo;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnCometer;
    QPushButton *btnVolver;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(513, 325);
        verticalLayout_3 = new QVBoxLayout(Dialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        menu = new QGroupBox(Dialog);
        menu->setObjectName(QString::fromUtf8("menu"));
        verticalLayout_2 = new QVBoxLayout(menu);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        checkBox_2 = new QCheckBox(menu);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        verticalLayout->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(menu);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        verticalLayout->addWidget(checkBox_3);

        checkBox = new QCheckBox(menu);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout->addWidget(checkBox);

        checkBox_4 = new QCheckBox(menu);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        verticalLayout->addWidget(checkBox_4);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout_3->addWidget(menu);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnImprimirTodo = new QPushButton(Dialog);
        btnImprimirTodo->setObjectName(QString::fromUtf8("btnImprimirTodo"));

        horizontalLayout->addWidget(btnImprimirTodo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnCometer = new QPushButton(Dialog);
        btnCometer->setObjectName(QString::fromUtf8("btnCometer"));

        horizontalLayout->addWidget(btnCometer);

        btnVolver = new QPushButton(Dialog);
        btnVolver->setObjectName(QString::fromUtf8("btnVolver"));

        horizontalLayout->addWidget(btnVolver);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(Dialog);
        QObject::connect(btnVolver, &QPushButton::clicked, Dialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        menu->setTitle(QCoreApplication::translate("Dialog", "GroupBox", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Dialog", "hamburguesa", nullptr));
        checkBox_3->setText(QCoreApplication::translate("Dialog", "ensalada", nullptr));
        checkBox->setText(QCoreApplication::translate("Dialog", "pescado", nullptr));
        checkBox_4->setText(QCoreApplication::translate("Dialog", "paella", nullptr));
        btnImprimirTodo->setText(QCoreApplication::translate("Dialog", "ImprimirHijos", nullptr));
        btnCometer->setText(QCoreApplication::translate("Dialog", "ImprimirElegidos", nullptr));
        btnVolver->setText(QCoreApplication::translate("Dialog", "Volver", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
