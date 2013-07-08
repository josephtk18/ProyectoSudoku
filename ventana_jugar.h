#ifndef VENTANA_JUGAR_H
#define VENTANA_JUGAR_H

#include <QMainWindow>
#include <sudoku.h>
#include <ventana_principal.h>

namespace Ui {
class Ventana_Jugar;
}

class Ventana_Jugar : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Ventana_Jugar(QWidget *parent = 0);
    ~Ventana_Jugar();
    /**
         @brief Coloca como fondo de ventana una imagen.
         */
    void setBackgroundImage();
    
private slots:
    /**
         @brief Genera el tablero en nivel 'fácil'.
         */
    void on_Btn_facil_clicked();
    /**
         @brief Genera el tablero en nivel 'normal'.
         */
    void on_Btn_normal_clicked();
    /**
         @brief Genera el tablero en nivel 'difícil'.
         */
    void on_Btn_dificil_clicked();
    /**
         @brief Genera el tablero guardado previamente,.
         */
    void on_Btn_cargar_clicked();
    /**
         @brief Regresa al menú principal.
         */
    void on_Btn_menu_clicked();

private:
    Ui::Ventana_Jugar *ui;
};

#endif // VENTANA_JUGAR_H
