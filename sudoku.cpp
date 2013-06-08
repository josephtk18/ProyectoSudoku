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
    std::cout<<"Mensaje"<<std::endl;
    /*int z=0, cont;
    QLineEdit *ledit;
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            ledit = (QLineEdit*) ui->gridTabla->itemAtPosition(i,j);
            cont = ledit->text().toInt();
            matriz[i][j]=cont;
            printf("Hola mundo");
        }
    }*/
}

bool Sudoku::validarFila(int fila, int columna){
    for(int i=0; i<9; i++){
        if(i!=columna){
            if(matriz[fila][i] == matriz[fila][columna]) return false;
        }
    }
}

bool Sudoku::validarColumna(int fila, int columna){
    for(int i=0; i<9; i++){
        if(i!=fila){
            if(matriz[i][columna] == matriz[fila][columna]) return false;
        }
    }
}

bool Sudoku::validarBloque(int fila, int columna){
    int ancho = fila/3;
    int largo = columna/3;

    for(int i=ancho*3; i<(ancho*3+3); i++){
        for(int j = largo*3; j< (largo*3+3); j++){
            if(!(i==fila && j==columna)){
                if(matriz[fila][columna] == matriz[fila][columna]) return false;
            }
        }
    }
}
