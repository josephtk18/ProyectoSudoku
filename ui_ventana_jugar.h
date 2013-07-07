/********************************************************************************
** Form generated from reading UI file 'ventana_jugar.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANA_JUGAR_H
#define UI_VENTANA_JUGAR_H

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

class Ui_Ventana_Jugar
{
public:
    QWidget *centralwidget;
    QLabel *titulo;
    QLabel *leyenda;
    QPushButton *Btn_facil;
    QPushButton *Btn_normal;
    QPushButton *Btn_dificil;
    QPushButton *Btn_cargar;
    QPushButton *Btn_menu;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Ventana_Jugar)
    {
        if (Ventana_Jugar->objectName().isEmpty())
            Ventana_Jugar->setObjectName(QStringLiteral("Ventana_Jugar"));
        Ventana_Jugar->resize(398, 369);
        centralwidget = new QWidget(Ventana_Jugar);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        titulo = new QLabel(centralwidget);
        titulo->setObjectName(QStringLiteral("titulo"));
        titulo->setGeometry(QRect(80, 0, 271, 51));
        leyenda = new QLabel(centralwidget);
        leyenda->setObjectName(QStringLiteral("leyenda"));
        leyenda->setGeometry(QRect(110, 60, 121, 16));
        Btn_facil = new QPushButton(centralwidget);
        Btn_facil->setObjectName(QStringLiteral("Btn_facil"));
        Btn_facil->setGeometry(QRect(150, 100, 141, 31));
        Btn_normal = new QPushButton(centralwidget);
        Btn_normal->setObjectName(QStringLiteral("Btn_normal"));
        Btn_normal->setGeometry(QRect(150, 150, 141, 31));
        Btn_dificil = new QPushButton(centralwidget);
        Btn_dificil->setObjectName(QStringLiteral("Btn_dificil"));
        Btn_dificil->setGeometry(QRect(150, 200, 141, 31));
        Btn_cargar = new QPushButton(centralwidget);
        Btn_cargar->setObjectName(QStringLiteral("Btn_cargar"));
        Btn_cargar->setGeometry(QRect(150, 250, 141, 31));
        Btn_menu = new QPushButton(centralwidget);
        Btn_menu->setObjectName(QStringLiteral("Btn_menu"));
        Btn_menu->setGeometry(QRect(150, 300, 141, 31));
        Ventana_Jugar->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Ventana_Jugar);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 398, 20));
        Ventana_Jugar->setMenuBar(menubar);
        statusbar = new QStatusBar(Ventana_Jugar);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Ventana_Jugar->setStatusBar(statusbar);

        retranslateUi(Ventana_Jugar);

        QMetaObject::connectSlotsByName(Ventana_Jugar);
    } // setupUi

    void retranslateUi(QMainWindow *Ventana_Jugar)
    {
        Ventana_Jugar->setWindowTitle(QApplication::translate("Ventana_Jugar", "MainWindow", 0));
        titulo->setText(QApplication::translate("Ventana_Jugar", "<html><head/><body><p><span style=\" font-size:28pt; font-weight:600;\">Iniciar Partida</span></p></body></html>", 0));
        leyenda->setText(QApplication::translate("Ventana_Jugar", "<html><head/><body><p><span style=\" font-size:10pt;\">Seleccione un nivel:</span></p></body></html>", 0));
        Btn_facil->setText(QApplication::translate("Ventana_Jugar", "F\303\241cil", 0));
        Btn_normal->setText(QApplication::translate("Ventana_Jugar", "Normal", 0));
        Btn_dificil->setText(QApplication::translate("Ventana_Jugar", "Dificil", 0));
        Btn_cargar->setText(QApplication::translate("Ventana_Jugar", "Cargar Partida", 0));
        Btn_menu->setText(QApplication::translate("Ventana_Jugar", "Regresar al men\303\272", 0));
    } // retranslateUi

};

namespace Ui {
    class Ventana_Jugar: public Ui_Ventana_Jugar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANA_JUGAR_H
