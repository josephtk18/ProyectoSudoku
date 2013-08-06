#ifndef SUDOKU_H
#define SUDOKU_H

#include <QMainWindow>
#include <QGridLayout>
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
#include <QLCDNumber>
#include <QTime>
#include <QTimer>

namespace Ui {
class Sudoku;
}


class Sudoku : public QMainWindow
{
    Q_OBJECT

public:
    explicit Sudoku(int nivel,bool cargar,QWidget *parent = 0);
    /*!
        @brief Inicializa la Matriz.
        */
    void inicializarMatriz();
    /*!
    @brief Función que pasa los números de cada casilla a la respectiva posicion de la matriz.
    @param casillas[] casillas con los respectivos números.
    */
    void pasarTableroAMatriz(Casilla* casillas[]);
    /*!
    @brief Inicializa el tablero gráfico.
    @param casillas[] casillas con los respectivos números.
    */
    void inicializarTablasUI(Casilla *casillas[]);
    /*!
    @brief Pasa los valores del tablero lógico al tablero gráfico.
    */
    void pasarMatrizAUI();
    /*!
    @brief Pasa los valores del tablero gráfico al tablero lógico.
    */
    void pasarUIAMatriz();
    /*!
    @brief Obtiene los valores correspondientes de la matriz.
    @return Devuelve un string con el respectivo número de la matriz.
    */
    QString pasarMatrizAString();
    /*!
    @brief Pasa los valores string previamente obtenidos a la matriz.
    @param string anteriormente obtenido.
    @see pasarMatrizAString()
    */
    void pasarStringAMatriz(QString linea);
    void ocultarCasillas(int nivel, Tablero *t);
    /*!
    @brief Establece el teclado de números mediante un widget.
    */
    void iniciarTeclado();
    void cargarPartida();
    /*!
    @brief Valida que el tablero este bien realizado.
    @param fila Fila a verificar.
    @param columna Columna a verificar.
    @see validarFila.
    @see validarColumna.
    @see validarBloque.
    @return Devuelve true si NO se ha repetido algún número.
    */
    bool validacion(int fila, int columna);
    /*!
    @brief Verifica que los dígitos de una fila no se repitan.
    @param fila Fila a verificar.
    @param columna Columna a verificar.
    @return Devuelve true si NO se ha repetido algún número.
    */
    bool validarFila(int fila, int columna);
    /*!
    @brief Verifica que los dígitos de una columna no se repitan.
    @param fila Fila a verificar.
    @param columna Columna a verificar.
    @return Devuelve true si NO se ha repetido algún número.
    */
    bool validarColumna(int fila, int columna);
    /*!
    @brief Verifica que los dígitos de un bloque no se repitan.
    @param fila Fila a verificar.
    @param columna Columna a verificar.
    @return Devuelve true si NO se ha repetido algún número.
    */
    bool validarBloque(int fila, int columna);
    /*!
    @brief Inicializa el QLCDNumber
    */
    void inicializarCronometro();
    /*!
    @brief Almacena el ganador de la partida en un .txt.
    */
    void guardarGanadores();
    ~Sudoku();

private slots:
    /**
    @brief Muestra una ventana con el mensaje que se ha llenado el juego correctamente.
    */
    void on_actionVerificar_Soluci_n_triggered();
    /**
    @brief Muestra la ventana de guardar la partida.
    */
    void on_actionGuardar_partida_triggered();
    /**
    @brief Muestra la ventana si se quiere regresar al menú principal.
    */
    void on_actionVolver_al_men_principal_triggered();
    /**
    @brief Muestra la ventana de Salir.
    */
    void on_actionSalir_triggered();

public slots:
    void changeSelected(QObject *o);
    void asignToSelect(QObject *ob);
    void showTime();
    void startTime();
    void stopTime();

private:
    Ui::Sudoku *ui;
    int matriz[9][9];
    Digito *Teclado[9];
    QString nombre;
    Casilla *casSelect;
    QTime *time;
    QTimer *timer;
    QLCDNumber *num;
    int seconds;


};

#endif // SUDOKU_H
