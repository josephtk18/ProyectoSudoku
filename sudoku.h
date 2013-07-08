#ifndef SUDOKU_H
#define SUDOKU_H

#include <QMainWindow>
#include <QGridLayout>
#include <QLineEdit>
#include <QLineEdit>
#include <stdio.h>
#include <stdlib.h>
#include <tablero.h>
#include <simplecrypt.h>
#include <time.h>
#include <iostream>
#include <QDebug>
#include <QFile>
#include <QMessageBox>
#include <digito.h>
#include <QInputDialog>
#include <ventana_principal.h>

namespace Ui {
class Sudoku;
}


class Sudoku : public QMainWindow
{
    Q_OBJECT

public:
    explicit Sudoku(int nivel,bool cargar,QWidget *parent = 0);
    void inicializarMatriz();
    void pasarTableroAMatriz(Casilla* casillas[]);
    void inicializarTablasUI(Casilla *casillas[]);
    void pasarMatrizAUI();
    void pasarUIAMatriz();
    QString pasarMatrizAString();
    void pasarStringAMatriz(QString linea);
    void ocultarCasillas(int nivel, Tablero *t);
    void iniciarTeclado();
    void cargarPartida();
    bool validacion(int fila, int columna);
    bool validarFila(int fila, int columna);
    bool validarColumna(int fila, int columna);
    bool validarBloque(int fila, int columna);
    ~Sudoku();

private slots:

    void on_actionVerificar_Soluci_n_triggered();

    void on_actionGuardar_partida_triggered();

    void on_actionVolver_al_men_principal_triggered();

    void on_actionSalir_triggered();

public slots:
    void changeSelected(QObject *o);
    void asignToSelect(QObject *ob);

private:
    Ui::Sudoku *ui;
    int matriz[9][9];
    Digito *Teclado[9];
    QString nombre;
    Casilla *casSelect;

};

#endif // SUDOKU_H
