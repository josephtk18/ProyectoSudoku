/********************************************************************************
** Form generated from reading UI file 'ayuda.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AYUDA_H
#define UI_AYUDA_H

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

class Ui_Ayuda
{
public:
    QWidget *centralwidget;
    QLabel *titulo;
    QLabel *leyenda;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Ayuda)
    {
        if (Ayuda->objectName().isEmpty())
            Ayuda->setObjectName(QStringLiteral("Ayuda"));
        Ayuda->resize(394, 365);
        centralwidget = new QWidget(Ayuda);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        titulo = new QLabel(centralwidget);
        titulo->setObjectName(QStringLiteral("titulo"));
        titulo->setGeometry(QRect(150, 10, 121, 51));
        leyenda = new QLabel(centralwidget);
        leyenda->setObjectName(QStringLiteral("leyenda"));
        leyenda->setGeometry(QRect(70, 80, 261, 241));
        Ayuda->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Ayuda);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 394, 20));
        Ayuda->setMenuBar(menubar);
        statusbar = new QStatusBar(Ayuda);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Ayuda->setStatusBar(statusbar);

        retranslateUi(Ayuda);

        QMetaObject::connectSlotsByName(Ayuda);
    } // setupUi

    void retranslateUi(QMainWindow *Ayuda)
    {
        Ayuda->setWindowTitle(QApplication::translate("Ayuda", "MainWindow", 0));
        titulo->setText(QApplication::translate("Ayuda", "<html><head/><body><p><span style=\" font-size:28pt; font-weight:600;\">Ayuda</span></p></body></html>", 0));
        leyenda->setText(QApplication::translate("Ayuda", "<html><head/><body><p align=\"justify\">- El sudoku se presenta normalmente como una tabla <br/>de 9 \303\227 9, compuesta por subtablas de 3 \303\227 3 deno-<br/>minadas &quot;regiones&quot; (tambi\303\251n se le llaman &quot;cajas&quot; <br/>o &quot;bloques&quot;).</p><p align=\"justify\">- Algunas celdas ya contienen n\303\272meros, conocidos <br/>como &quot;n\303\272meros dados&quot; (o a veces &quot;pistas&quot;). El ob-<br/>jetivo es rellenar las celdas vac\303\255as, con un n\303\272mero <br/>en cada una de ellas, de tal forma que cada co-<br/>lumna, fila y regi\303\263n contenga los n\303\272meros 1\342\200\2239 s\303\263lo <br/>una vez.</p><p>- Adem\303\241s, cada n\303\272mero de la soluci\303\263n aparece s\303\263lo <br/>una vez en cada una de las tres &quot;direcciones&quot;, de <br/>ah\303\255 el &quot;los n\303\272meros deben estar solos&quot; que evoca el <br/>nombre del juego.<br/><br/>Fuente: Wikipedia.</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class Ayuda: public Ui_Ayuda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AYUDA_H
