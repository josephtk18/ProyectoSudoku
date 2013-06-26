#ifndef SUDOKU_H
#define SUDOKU_H

#include <QMainWindow>
#include <QGridLayout>
#include <QLineEdit>
#include <QLineEdit>
#include <stdio.h>

namespace Ui {
class Sudoku;
}


class Sudoku : public QMainWindow
{
    Q_OBJECT

public:
    explicit Sudoku(QWidget *parent = 0);
    void llenarTabla();
    bool validacion(int fila, int columna);
    bool validarFila(int fila, int columna);
    bool validarColumna(int fila, int columna);
    bool validarBloque(int fila, int columna);
    bool validarValor(int fila, int columna, int valor);
    void rellenarWidget();
    void asignarFila(int fila);
    bool asignarNumero(int fila, int columna, int valor, int counter);
    ~Sudoku();

private slots:
    void on_Btn_validar_clicked();

private:
    Ui::Sudoku *ui;
    QLineEdit *cuadro[81];
    int matriz[9][9];

};

#endif // SUDOKU_H
