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
#include <QtWidgets/QDialog>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *textoRotulo;
    QLineEdit *lineaEditor;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *tipoRotulo;
    QFontComboBox *fuenteComboCaja;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAlma;
    QPushButton *btnCanc;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(432, 260);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        textoRotulo = new QLabel(Dialog);
        textoRotulo->setObjectName(QString::fromUtf8("textoRotulo"));

        horizontalLayout_3->addWidget(textoRotulo);

        lineaEditor = new QLineEdit(Dialog);
        lineaEditor->setObjectName(QString::fromUtf8("lineaEditor"));
        QFont font;
        font.setFamilies({QString::fromUtf8("MS PGothic")});
        font.setPointSize(17);
        font.setBold(true);
        font.setUnderline(false);
        font.setStrikeOut(false);
        lineaEditor->setFont(font);

        horizontalLayout_3->addWidget(lineaEditor);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(356, 59, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tipoRotulo = new QLabel(Dialog);
        tipoRotulo->setObjectName(QString::fromUtf8("tipoRotulo"));

        horizontalLayout_2->addWidget(tipoRotulo);

        fuenteComboCaja = new QFontComboBox(Dialog);
        fuenteComboCaja->setObjectName(QString::fromUtf8("fuenteComboCaja"));

        horizontalLayout_2->addWidget(fuenteComboCaja);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(356, 59, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnAlma = new QPushButton(Dialog);
        btnAlma->setObjectName(QString::fromUtf8("btnAlma"));

        horizontalLayout->addWidget(btnAlma);

        btnCanc = new QPushButton(Dialog);
        btnCanc->setObjectName(QString::fromUtf8("btnCanc"));

        horizontalLayout->addWidget(btnCanc);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        textoRotulo->setText(QCoreApplication::translate("Dialog", "Texto", nullptr));
        lineaEditor->setText(QString());
        lineaEditor->setPlaceholderText(QCoreApplication::translate("Dialog", "Velazquez", nullptr));
        tipoRotulo->setText(QCoreApplication::translate("Dialog", "Tipo de Letra", nullptr));
        btnAlma->setText(QCoreApplication::translate("Dialog", "Almacenar", nullptr));
        btnCanc->setText(QCoreApplication::translate("Dialog", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
