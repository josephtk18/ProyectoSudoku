/********************************************************************************
** Form generated from reading UI file 'ventana_principal.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANA_PRINCIPAL_H
#define UI_VENTANA_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ventana_principal
{
public:
    QWidget *centralwidget;
    QLabel *Titulo;
    QPushButton *Btn_Iniciar;
    QPushButton *Btn_estadisticas;
    QPushButton *Btn_acercaDe;
    QPushButton *Btn_Salir;
    QPushButton *Btn_Ayuda;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Ventana_principal)
    {
        if (Ventana_principal->objectName().isEmpty())
            Ventana_principal->setObjectName(QStringLiteral("Ventana_principal"));
        Ventana_principal->resize(399, 426);
        centralwidget = new QWidget(Ventana_principal);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Titulo = new QLabel(centralwidget);
        Titulo->setObjectName(QStringLiteral("Titulo"));
        Titulo->setGeometry(QRect(70, 40, 261, 91));
        Btn_Iniciar = new QPushButton(centralwidget);
        Btn_Iniciar->setObjectName(QStringLiteral("Btn_Iniciar"));
        Btn_Iniciar->setGeometry(QRect(140, 150, 141, 31));
        Btn_estadisticas = new QPushButton(centralwidget);
        Btn_estadisticas->setObjectName(QStringLiteral("Btn_estadisticas"));
        Btn_estadisticas->setGeometry(QRect(140, 200, 141, 31));
        Btn_acercaDe = new QPushButton(centralwidget);
        Btn_acercaDe->setObjectName(QStringLiteral("Btn_acercaDe"));
        Btn_acercaDe->setGeometry(QRect(140, 300, 141, 31));
        Btn_Salir = new QPushButton(centralwidget);
        Btn_Salir->setObjectName(QStringLiteral("Btn_Salir"));
        Btn_Salir->setGeometry(QRect(140, 350, 141, 31));
        Btn_Ayuda = new QPushButton(centralwidget);
        Btn_Ayuda->setObjectName(QStringLiteral("Btn_Ayuda"));
        Btn_Ayuda->setGeometry(QRect(140, 250, 141, 31));
        Ventana_principal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Ventana_principal);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 399, 20));
        Ventana_principal->setMenuBar(menubar);
        statusbar = new QStatusBar(Ventana_principal);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Ventana_principal->setStatusBar(statusbar);

        retranslateUi(Ventana_principal);

        QMetaObject::connectSlotsByName(Ventana_principal);
    } // setupUi

    void retranslateUi(QMainWindow *Ventana_principal)
    {
        Ventana_principal->setWindowTitle(QApplication::translate("Ventana_principal", "MainWindow", 0));
        Titulo->setText(QApplication::translate("Ventana_principal", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-weight:600; font-style:italic;\">Sudoku</span></p></body></html>", 0));
        Btn_Iniciar->setText(QApplication::translate("Ventana_principal", "Iniciar Partida", 0));
        Btn_estadisticas->setText(QApplication::translate("Ventana_principal", "Estad\303\255sticas", 0));
        Btn_acercaDe->setText(QApplication::translate("Ventana_principal", "Acerca De", 0));
        Btn_Salir->setText(QApplication::translate("Ventana_principal", "Salir", 0));
        Btn_Ayuda->setText(QApplication::translate("Ventana_principal", "Ayuda", 0));
    } // retranslateUi

};

namespace Ui {
    class Ventana_principal: public Ui_Ventana_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANA_PRINCIPAL_H
