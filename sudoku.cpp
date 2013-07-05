#include "sudoku.h"
#include "ui_sudoku.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>

Sudoku::Sudoku(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Sudoku)
{
    ui->setupUi(this);
    Tablero* t = new Tablero();
    t->generarTablero();
    inicializarMatriz();
    pasarTableroAMatriz(t->casillas);
    inicializarTablaUI();
    pasarMatrizAUI();

    //llenarTablaUI();
    //generarMatriz();
    //rellenarWidget();

}

Sudoku::~Sudoku()
{
    delete ui;
}

void Sudoku::inicializarMatriz(){
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            matriz[i][j]=0;
        }
    }
}

void Sudoku::pasarTableroAMatriz(Casilla *casillas[]){
    int pos=0;
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            matriz[i][j]=casillas[pos]->getContenido();
            pos++;
        }
    }
}

void Sudoku::inicializarTablaUI(){
    int z = 0;
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cuadro[z] = new QLineEdit();
            ui->gridTabla->addWidget(cuadro[z],i,j);
            z++;
        }
    }
}

void Sudoku::pasarMatrizAUI(){
    QLineEdit *ledit;
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            ledit = (QLineEdit*)(ui->gridTabla->itemAtPosition(i,j)->widget());
            ledit->setText(QString::number(matriz[i][j]));
        }
    }
}

void Sudoku::on_Btn_validar_clicked(){
    int cont;
    bool valido=true;
    QLineEdit *ledit;

    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            ledit = (QLineEdit*)(ui->gridTabla->itemAtPosition(i,j)->widget());
            cont = ledit->text().toInt();
            matriz[i][j]=cont;
        }
    }

    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            if(!validarFila(i,j)) valido=false;
            if(!validarColumna(i,j)) valido=false;
            if(!validarBloque(i,j)) valido=false;
        }
    }

    if(!valido) std::cout<<"El tablero esta mal llenado"<<std::endl;
    else std::cout<<"El tablero esta bien llenado"<<std::endl;
}










bool Sudoku::validacion(int fila, int columna){
    if(validarFila(fila,columna) && validarColumna(fila,columna) && validarBloque(fila,columna)) return true;
    return false;
}

bool Sudoku::validarFila(int fila, int columna){
    for(int i=0; i<9; i++){
        if(i!=columna){
            if(matriz[fila][i] == matriz[fila][columna] || matriz[fila][i] > 9) return false;
        }
    }
    return true;
}

bool Sudoku::validarColumna(int fila, int columna){
    for(int i=0; i<9; i++){
        if(i!=fila){
            if(matriz[i][columna] == matriz[fila][columna] || matriz[i][columna] > 9) return false;
        }
    }
    return true;
}

bool Sudoku::validarBloque(int fila, int columna){
    int ancho = fila/3;
    int largo = columna/3;

    for(int i=ancho*3; i<(ancho*3+3); i++){
        for(int j = largo*3; j< (largo*3+3); j++){
            if(!(i==fila && j==columna)){
                if(matriz[fila][columna] == matriz[i][j]) return false;
            }
        }
    }
    return true;
}
