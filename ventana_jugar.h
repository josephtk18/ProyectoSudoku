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
    void setBackgroundImage();
    
private slots:
    void on_Btn_facil_clicked();

    void on_Btn_normal_clicked();

    void on_Btn_dificil_clicked();

    void on_Btn_cargar_clicked();

    void on_Btn_menu_clicked();

private:
    Ui::Ventana_Jugar *ui;
};

#endif // VENTANA_JUGAR_H
