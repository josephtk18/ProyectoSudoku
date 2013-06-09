#include "sudoku.h"
#include "ui_sudoku.h"
#include <iostream>


Sudoku::Sudoku(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Sudoku)
{
    ui->setupUi(this);
    llenarTabla();

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
            cuadro[z] = new QLineEdit(QString::number(z));
            ui->gridTabla->addWidget(cuadro[z],i,j);
            z++;
        }
    }
}



void Sudoku::on_Btn_validar_clicked()
{
    //std::cout<<"Mensaje"<<std::endl;
    int cont;
    QLineEdit *ledit;
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            ledit = (QLineEdit*)(ui->gridTabla->itemAtPosition(i,j)->widget());
            cont = ledit->text().toInt();
            matriz[i][j]=cont;
            //printf("Hola mundo");
        }
    }
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            if(!validarFila(i,j))
                printf("Fila %d Invalida\n",i+1);
            if(!validarColumna(i,j))
                printf("Columna %d Invalida\n",j+1);
            if(!validarBloque(i,j))
                printf("Bloque Invalido\n");
        }
    }
}

bool Sudoku::validarFila(int fila, int columna){
    for(int i=0; i<9; i++){
        if(i!=columna){
            if(matriz[fila][i] == matriz[fila][columna]) return false;
        }
    }
    return true;
}

bool Sudoku::validarColumna(int fila, int columna){
    for(int i=0; i<9; i++){
        if(i!=fila){
            if(matriz[i][columna] == matriz[fila][columna]) return false;
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
