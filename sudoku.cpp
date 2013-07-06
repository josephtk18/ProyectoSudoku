#include "sudoku.h"
#include "ui_sudoku.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <QDebug>
#include <QFile>
#include <QMessageBox>

Sudoku::Sudoku(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Sudoku)
{
    ui->setupUi(this);
    Tablero* t = new Tablero();
    SimpleCrypt crypto(Q_UINT64_C(0x0c2ad4a4acb9f023));

    t->generarTablero();
    inicializarMatriz();
    pasarTableroAMatriz(t->casillas);
    inicializarTablaUI();
    pasarMatrizAUI();

    QString testString("Mensaje a encriptar");
    QString result = crypto.encryptToString(testString);
    QString decrypted = crypto.decryptToString(result);
    qDebug() << testString << endl << result << endl << decrypted;


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

void Sudoku::pasarUIAMatriz(){
    QLineEdit *ledit;
    int cont;
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            ledit = (QLineEdit*)(ui->gridTabla->itemAtPosition(i,j)->widget());
            cont = ledit->text().toInt();
            matriz[i][j]=cont;
        }
    }
}

QString Sudoku::pasarMatrizAString(){
    QString linea("");
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            linea.append(QString::number(matriz[i][j],10));
            if(j==8){
                linea.append("\n");
            }
        }
    }
    return linea;
}

void Sudoku::pasarStringAMatriz(QString linea){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            matriz[i][j]=linea.left(1).toInt();
            linea.remove(0,1);
            if(j==8) linea.remove(0,1);
        }
    }
}

void Sudoku::on_Btn_validar_clicked(){
    bool valido=true;

    pasarUIAMatriz();

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

void Sudoku::on_Btn_Guardar_clicked(){
    SimpleCrypt crypto(Q_UINT64_C(0x0c2ad4a4acb9f023));

    pasarUIAMatriz();
    QString linea=pasarMatrizAString();
    QString crypted=crypto.encryptToString(linea);

    QFile archivo("partida.txt");
    if ( !archivo.open(QIODevice::WriteOnly)) {
        qDebug()<<"Guardado fallido!";
    } else {
        QTextStream stream(&archivo);
        stream << crypted;
        stream.flush();
        qDebug()<<"Guardado completado!";
    }
}

void Sudoku::on_Btn_Cargar_clicked(){
    QFile archivo("partida.txt");
    if (archivo.exists("partida.txt")){
        archivo.open(QFile::ReadOnly);
        QTextStream stream(&archivo);
        QString linea=stream.readAll();
        pasarStringAMatriz(linea);
        pasarMatrizAUI();


        qDebug()<<linea;
    } else {
        QMessageBox::critical(this,"Error","No existe el archivo ");
    }
    archivo.close();
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




