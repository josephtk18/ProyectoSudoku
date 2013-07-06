#ifndef SUDOKU_H
#define SUDOKU_H

#include <QMainWindow>
#include <QGridLayout>
#include <QLineEdit>
#include <QLineEdit>
#include <stdio.h>
#include <tablero.h>
#include <simplecrypt.h>

namespace Ui {
class Sudoku;
}


class Sudoku : public QMainWindow
{
    Q_OBJECT

public:
    explicit Sudoku(QWidget *parent = 0);
    void inicializarMatriz();
    void pasarTableroAMatriz(Casilla* casillas[]);
    void inicializarTablaUI();
    void pasarMatrizAUI();
    void pasarUIAMatriz();
    QString pasarMatrizAString();
    void pasarStringAMatriz(QString linea);
    bool validacion(int fila, int columna);
    bool validarFila(int fila, int columna);
    bool validarColumna(int fila, int columna);
    bool validarBloque(int fila, int columna);
    ~Sudoku();

private slots:
    void on_Btn_validar_clicked();

    void on_Btn_Guardar_clicked();

    void on_Btn_Cargar_clicked();

private:
    Ui::Sudoku *ui;
    QLineEdit *cuadro[81];
    int matriz[9][9];

};

#endif // SUDOKU_H
