#include "sudoku.h"
#include "ui_sudoku.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <QGlobal.h>
#include <QTime>


Sudoku::Sudoku(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Sudoku)
{
    ui->setupUi(this);
    srand((unsigned)time(NULL));
    llenarTabla();
    rellenarWidget();

}

Sudoku::~Sudoku()
{
    delete ui;
}

void Sudoku::llenarTabla()
{
    int z = 0;
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            cuadro[z] = new QLineEdit();
            ui->gridTabla->addWidget(cuadro[z],i,j);
            z++;
        }
    }

    for(int k=0; k<9; k++){
        for(int l=0; l<9; l++){
            matriz[k][l]=0;
        }
    }
    asignarFila(0);
}

void Sudoku::asignarFila(int fila){
    if (fila>8){
        return;
    }
    else{
        //Crear un arreglo de 9 ints, y le asigna los valores 1,2,...9
        int arreglo[9];
        for(int i=1;i<=9;i++){
            arreglo[i-1]=i;
        }

        //Una vez generada la fila, los intercambia de posiciones 9 veces, para que se desordene
        int rango=9;
        while (rango > 0){
            int random = rand()%rango;
            rango--;
            int temp = arreglo[rango];
            arreglo[rango]=arreglo[random];
            arreglo[random] = temp;
        }

        //Llena la fila de la matriz con los valores del arreglo
        bool flag = false;
        for(int j=0; j<9; j++){
            for(int k=0; k<9; k++){
                flag=false;
                if(arreglo[k]>=0){
                    flag = asignarNumero(fila, j, arreglo[k], 0);
                }

                if(flag==true){
                    arreglo[k]=-1;
                    break;
                }
            }
        }
        asignarFila(fila + 1);
    }

}

bool Sudoku::asignarNumero(int fila, int columna, int valor, int counter){

    if(counter>columna){
        return false;
    }

    if(validarValor(fila,columna,valor) && !counter) {
        matriz[fila][columna] = valor;
        return true;
    }
    else if(counter && validarValor(fila,columna - counter,valor) && validarValor(fila, columna, matriz[fila][columna - counter])){
        matriz[fila][columna] = matriz[fila][columna - counter];
        matriz[fila][columna - counter] = valor;
        return true;
    }else {
        counter++;
        return asignarNumero(fila, columna, valor, counter);
    }
}


void Sudoku::rellenarWidget(){
    QLineEdit *ledit;

    //rellenarMatriz(0,0);
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            ledit = (QLineEdit*)(ui->gridTabla->itemAtPosition(i,j)->widget());
            ledit->setText(QString::number(matriz[i][j]));
        }
    }
}

void Sudoku::on_Btn_validar_clicked()
{
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

bool Sudoku::validarValor(int fila, int columna, int valor){
    int centrox = fila/3;
    int centroy = columna/3;
    for(int i=fila; i<=9; i++){
        for(int j=0; j<=9; j++){
            if(matriz[i][j]!=0){
                if(fila==i || columna==j || centrox==i/3 || centroy==j/3){
                    if(matriz[i][j]==valor)
                        return false;
                }
            }
        }
    }
    return true;
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
