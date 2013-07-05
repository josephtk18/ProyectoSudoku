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
    llenarTablaUI();
    generarMatriz();
    rellenarWidget();

}

Sudoku::~Sudoku()
{
    delete ui;
}

void Sudoku::generarMatriz(){
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            matriz[i][j]=0;
        }
    }
    generarFila(0);
}

void Sudoku::generarFila(int f){
    int arreglo[9], cont=0;
    if(f>8) return;
    generarArregloRandom(arreglo);

    for(int i=0; i<9; i++){
        matriz[f][i]=arreglo[cont];
        if(!validacion(f,i)){
            if(i==8){
                vaciarFila(f);
                generarArregloRandom(arreglo);
                i=-1;
            } else {
                i--;
                cont++;
                if(!hayArreglo(cont,arreglo)){
                    vaciarFila(f);
                    generarArregloRandom(arreglo);
                    i=-1;
                }
            }
        } else {
            eliminarNum(arreglo,matriz[f][i]);
            cont=0;
        }
    }
    generarFila(f+1);
}

void Sudoku::vaciarFila(int f){
    for(int i=0; i<9; i++){
        matriz[f][i]=0;
    }
}

void Sudoku::eliminarNum(int a[],int n){
    int flag;
    for(int i=0; i<9; i++){
        if(a[i]==n){
            flag=i;
            break;
        }
    }
    while(flag<8){
        if(a[flag+1]!=0){
            a[flag]=a[flag+1];
            flag++;
        } else
            break;
    }
    while(flag<9){
        a[flag]=0;
        flag++;
    }
}

void Sudoku::llenarTablaUI(){
    int z = 0;
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cuadro[z] = new QLineEdit();
            ui->gridTabla->addWidget(cuadro[z],i,j);
            z++;
        }
    }
}

void Sudoku::generarArregloRandom(int a[]){
    for(int i=1;i<=9;i++){
        a[i-1]=i;
    }

    //Una vez generada la fila, los intercambia de posiciones 9 veces, para que se desordene
    int rango=9;
    while (rango > 0){
        int random = rand()%rango;
        rango--;
        int temp = a[rango];
        a[rango]=a[random];
        a[random] = temp;
    }
}

bool Sudoku::hayArreglo(int cont, int a[]){
    int disp=0;
    for(int i=0; i<9; i++){
        if(a[i]!=0) disp++;
    }
    if(cont>disp) return false;
    return true;
}

void Sudoku::rellenarWidget(){
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
