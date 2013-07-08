#ifndef VENTANA_PRINCIPAL_H
#define VENTANA_PRINCIPAL_H

#include <QMainWindow>
#include <QPalette>
#include <QtGui>
#include <QMessageBox>
#include <acercade.h>
#include <ventana_jugar.h>
#include <ayuda.h>
#include <estadisticas.h>

namespace Ui {
class Ventana_principal;
}

class Ventana_principal : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Ventana_principal(QWidget *parent = 0);
    ~Ventana_principal();
    /**
         @brief Muestra el Sudoku en nivel fácil.
         */
    void setBackgroundImage();
    
private slots:
    /**
         @brief Genera la ventana para elejir el respectivo nivel.
         */
    void on_Btn_Iniciar_clicked();
    /**
         @brief Muestra las estadísticas del juego con los mejores jugadores.
         */
    void on_Btn_estadisticas_clicked();
    /**
         @brief Muestra las reglas del juego.
         */
    void on_Btn_Ayuda_clicked();
    /**
         @brief Muestra loa ventana con las referencias del juego.
         */
    void on_Btn_acercaDe_clicked();
    /**
         @brief Muestra una ventana pideiendo la confirmación de salida.
         */
    void on_Btn_Salir_clicked();

private:
    Ui::Ventana_principal *ui;
};

#endif // VENTANA_PRINCIPAL_H
