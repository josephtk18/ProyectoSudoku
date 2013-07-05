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
    void generarMatriz();
    void generarFila(int f);
    void vaciarFila(int f);
    void eliminarNum(int a[],int n);
    void llenarTablaUI();
    void generarArregloRandom(int a[]);
    bool hayArreglo(int cont, int a[]);
    void rellenarWidget();
    bool validacion(int fila, int columna);
    bool validarFila(int fila, int columna);
    bool validarColumna(int fila, int columna);
    bool validarBloque(int fila, int columna);
    ~Sudoku();

private slots:
    void on_Btn_validar_clicked();

private:
    Ui::Sudoku *ui;
    QLineEdit *cuadro[81];
    int matriz[9][9];

};

#endif // SUDOKU_H
