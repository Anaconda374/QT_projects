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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QLabel *marbeteElegir;
    QComboBox *comboCaja;
    QSpacerItem *verticalSpacer;
    QLabel *marbeteOpnElegida;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btnAlmacenar;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(269, 176);
        verticalLayout_2 = new QVBoxLayout(Dialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitter = new QSplitter(Dialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        marbeteElegir = new QLabel(splitter);
        marbeteElegir->setObjectName(QString::fromUtf8("marbeteElegir"));
        splitter->addWidget(marbeteElegir);
        comboCaja = new QComboBox(splitter);
        comboCaja->setObjectName(QString::fromUtf8("comboCaja"));
        splitter->addWidget(comboCaja);

        verticalLayout->addWidget(splitter);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        marbeteOpnElegida = new QLabel(Dialog);
        marbeteOpnElegida->setObjectName(QString::fromUtf8("marbeteOpnElegida"));

        verticalLayout->addWidget(marbeteOpnElegida);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        btnAlmacenar = new QPushButton(Dialog);
        btnAlmacenar->setObjectName(QString::fromUtf8("btnAlmacenar"));

        verticalLayout->addWidget(btnAlmacenar);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        marbeteElegir->setText(QCoreApplication::translate("Dialog", "Elege una opcion", nullptr));
        marbeteOpnElegida->setText(QCoreApplication::translate("Dialog", "Opcion elegida:", nullptr));
        btnAlmacenar->setText(QCoreApplication::translate("Dialog", "Almacenar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
