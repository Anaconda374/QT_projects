/********************************************************************************
** Form generated from reading UI file 'mdi.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MDI_H
#define UI_MDI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MDI
{
public:
    QAction *actionNuevo;
    QAction *actionAbrir;
    QAction *actionGuardar;
    QAction *actionGuardar_como;
    QAction *actionCopiar;
    QAction *actionCortar;
    QAction *actionPegar;
    QAction *actionCascada;
    QAction *actionBaldosa;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QMdiArea *mdiArea;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QMenu *menuEditar;
    QMenu *menuVentana;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MDI)
    {
        if (MDI->objectName().isEmpty())
            MDI->setObjectName(QString::fromUtf8("MDI"));
        MDI->resize(605, 436);
        QFont font;
        font.setItalic(false);
        MDI->setFont(font);
        MDI->setStyleSheet(QString::fromUtf8("color: rgb(49, 49, 49);\n"
"background-color: rgb(98, 98, 98);"));
        actionNuevo = new QAction(MDI);
        actionNuevo->setObjectName(QString::fromUtf8("actionNuevo"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagenes/iconos/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNuevo->setIcon(icon);
        actionAbrir = new QAction(MDI);
        actionAbrir->setObjectName(QString::fromUtf8("actionAbrir"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagenes/iconos/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbrir->setIcon(icon1);
        actionGuardar = new QAction(MDI);
        actionGuardar->setObjectName(QString::fromUtf8("actionGuardar"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imagenes/iconos/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGuardar->setIcon(icon2);
        actionGuardar_como = new QAction(MDI);
        actionGuardar_como->setObjectName(QString::fromUtf8("actionGuardar_como"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/imagenes/iconos/saveas.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGuardar_como->setIcon(icon3);
        actionCopiar = new QAction(MDI);
        actionCopiar->setObjectName(QString::fromUtf8("actionCopiar"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/imagenes/iconos/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopiar->setIcon(icon4);
        actionCortar = new QAction(MDI);
        actionCortar->setObjectName(QString::fromUtf8("actionCortar"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/imagenes/iconos/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCortar->setIcon(icon5);
        actionPegar = new QAction(MDI);
        actionPegar->setObjectName(QString::fromUtf8("actionPegar"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/imagenes/iconos/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPegar->setIcon(icon6);
        actionCascada = new QAction(MDI);
        actionCascada->setObjectName(QString::fromUtf8("actionCascada"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/imagenes/iconos/tile_cascade.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCascada->setIcon(icon7);
        actionBaldosa = new QAction(MDI);
        actionBaldosa->setObjectName(QString::fromUtf8("actionBaldosa"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/imagenes/iconos/tile_horizontal.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBaldosa->setIcon(icon8);
        centralwidget = new QWidget(MDI);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mdiArea = new QMdiArea(centralwidget);
        mdiArea->setObjectName(QString::fromUtf8("mdiArea"));
        mdiArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        mdiArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

        verticalLayout->addWidget(mdiArea);

        MDI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MDI);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 605, 23));
        QFont font1;
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        menubar->setFont(font1);
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName(QString::fromUtf8("menuArchivo"));
        menuEditar = new QMenu(menubar);
        menuEditar->setObjectName(QString::fromUtf8("menuEditar"));
        menuVentana = new QMenu(menubar);
        menuVentana->setObjectName(QString::fromUtf8("menuVentana"));
        MDI->setMenuBar(menubar);
        statusbar = new QStatusBar(MDI);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MDI->setStatusBar(statusbar);
        toolBar = new QToolBar(MDI);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MDI->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuArchivo->menuAction());
        menubar->addAction(menuEditar->menuAction());
        menubar->addAction(menuVentana->menuAction());
        menuArchivo->addAction(actionNuevo);
        menuArchivo->addAction(actionAbrir);
        menuArchivo->addAction(actionGuardar);
        menuArchivo->addAction(actionGuardar_como);
        menuEditar->addAction(actionCopiar);
        menuEditar->addAction(actionCortar);
        menuEditar->addAction(actionPegar);
        menuVentana->addAction(actionCascada);
        menuVentana->addAction(actionBaldosa);
        toolBar->addAction(actionNuevo);
        toolBar->addAction(actionAbrir);
        toolBar->addAction(actionGuardar);
        toolBar->addAction(actionGuardar_como);
        toolBar->addSeparator();
        toolBar->addAction(actionCopiar);
        toolBar->addAction(actionCortar);
        toolBar->addAction(actionPegar);
        toolBar->addSeparator();
        toolBar->addAction(actionCascada);
        toolBar->addAction(actionBaldosa);

        retranslateUi(MDI);

        QMetaObject::connectSlotsByName(MDI);
    } // setupUi

    void retranslateUi(QMainWindow *MDI)
    {
        MDI->setWindowTitle(QCoreApplication::translate("MDI", "MDI", nullptr));
        actionNuevo->setText(QCoreApplication::translate("MDI", "Nuevo", nullptr));
        actionAbrir->setText(QCoreApplication::translate("MDI", "Abrir", nullptr));
        actionGuardar->setText(QCoreApplication::translate("MDI", "Guardar", nullptr));
        actionGuardar_como->setText(QCoreApplication::translate("MDI", "Guardar_como", nullptr));
        actionCopiar->setText(QCoreApplication::translate("MDI", "Copiar", nullptr));
        actionCortar->setText(QCoreApplication::translate("MDI", "Cortar", nullptr));
        actionPegar->setText(QCoreApplication::translate("MDI", "Pegar", nullptr));
        actionCascada->setText(QCoreApplication::translate("MDI", "Cascada", nullptr));
        actionBaldosa->setText(QCoreApplication::translate("MDI", "Baldosa", nullptr));
        menuArchivo->setTitle(QCoreApplication::translate("MDI", "Archivo", nullptr));
        menuEditar->setTitle(QCoreApplication::translate("MDI", "Editar", nullptr));
        menuVentana->setTitle(QCoreApplication::translate("MDI", "Ventana", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MDI", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MDI: public Ui_MDI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MDI_H
