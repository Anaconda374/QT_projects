/********************************************************************************
** Form generated from reading UI file 'subdialogo.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBDIALOGO_H
#define UI_SUBDIALOGO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubDialogo
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *etiquetaElegir;
    QComboBox *comboBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnRechazar;
    QPushButton *btnAcceptar;

    void setupUi(QDialog *SubDialogo)
    {
        if (SubDialogo->objectName().isEmpty())
            SubDialogo->setObjectName(QString::fromUtf8("SubDialogo"));
        SubDialogo->resize(429, 221);
        widget = new QWidget(SubDialogo);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(71, 40, 291, 161));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        etiquetaElegir = new QLabel(widget);
        etiquetaElegir->setObjectName(QString::fromUtf8("etiquetaElegir"));
        QFont font;
        font.setPointSize(14);
        etiquetaElegir->setFont(font);

        gridLayout->addWidget(etiquetaElegir, 0, 0, 1, 1);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 78, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btnRechazar = new QPushButton(widget);
        btnRechazar->setObjectName(QString::fromUtf8("btnRechazar"));

        horizontalLayout_2->addWidget(btnRechazar);

        btnAcceptar = new QPushButton(widget);
        btnAcceptar->setObjectName(QString::fromUtf8("btnAcceptar"));

        horizontalLayout_2->addWidget(btnAcceptar);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(SubDialogo);

        QMetaObject::connectSlotsByName(SubDialogo);
    } // setupUi

    void retranslateUi(QDialog *SubDialogo)
    {
        SubDialogo->setWindowTitle(QCoreApplication::translate("SubDialogo", "Dialog", nullptr));
        etiquetaElegir->setText(QCoreApplication::translate("SubDialogo", "Elegir:", nullptr));
        btnRechazar->setText(QCoreApplication::translate("SubDialogo", "Rechazar", nullptr));
        btnAcceptar->setText(QCoreApplication::translate("SubDialogo", "Acceptar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SubDialogo: public Ui_SubDialogo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBDIALOGO_H
