/********************************************************************************
** Form generated from reading UI file 'estadisticas.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ESTADISTICAS_H
#define UI_ESTADISTICAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Estadisticas
{
public:
    QWidget *centralwidget;
    QLabel *titulo;
    QLabel *label;
    QLabel *ganadores;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Estadisticas)
    {
        if (Estadisticas->objectName().isEmpty())
            Estadisticas->setObjectName(QStringLiteral("Estadisticas"));
        Estadisticas->resize(395, 467);
        centralwidget = new QWidget(Estadisticas);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        titulo = new QLabel(centralwidget);
        titulo->setObjectName(QStringLiteral("titulo"));
        titulo->setGeometry(QRect(90, 30, 221, 51));
        QPalette palette;
        QBrush brush(QColor(0, 143, 143, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(112, 111, 113, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        titulo->setPalette(palette);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 90, 221, 21));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label->setPalette(palette1);
        ganadores = new QLabel(centralwidget);
        ganadores->setObjectName(QStringLiteral("ganadores"));
        ganadores->setGeometry(QRect(120, 120, 171, 41));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        ganadores->setPalette(palette2);
        Estadisticas->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Estadisticas);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 395, 20));
        Estadisticas->setMenuBar(menubar);
        statusbar = new QStatusBar(Estadisticas);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Estadisticas->setStatusBar(statusbar);

        retranslateUi(Estadisticas);

        QMetaObject::connectSlotsByName(Estadisticas);
    } // setupUi

    void retranslateUi(QMainWindow *Estadisticas)
    {
        Estadisticas->setWindowTitle(QApplication::translate("Estadisticas", "MainWindow", 0));
        titulo->setText(QApplication::translate("Estadisticas", "<html><head/><body><p><span style=\" font-size:28pt; font-weight:600;\">Estad\303\255sticas</span></p></body></html>", 0));
        label->setText(QApplication::translate("Estadisticas", "Lista de jugadores que finalizaron el juego:", 0));
        ganadores->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Estadisticas: public Ui_Estadisticas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ESTADISTICAS_H
