#include "sudoku.h"
#include "ui_sudoku.h"


Sudoku::Sudoku(int nivel, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Sudoku)
{
    ui->setupUi(this);
    Tablero* t = new Tablero();
    setWindowIcon(QIcon("Imagenes/logo.jpg"));

    t->generarTablero();
    inicializarMatriz();
    pasarTableroAMatriz(t->casillas);
    inicializarTablaUI(t->casillas);
    ocultarCasillas(nivel,t);
    pasarMatrizAUI();
    iniciarTeclado();
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

void Sudoku::inicializarTablaUI(Casilla *casillas[]){
    int z = 0;
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            ui->gridTabla->addWidget(casillas[z],i,j);
            z++;
        }
    }
}

void Sudoku::pasarMatrizAUI(){
    Casilla *cas;
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            cas = (Casilla*)(ui->gridTabla->itemAtPosition(i,j)->widget());
            cas->setContenido(matriz[i][j]);
            cas->setGrafic(matriz[i][j]);
        }
    }
}

void Sudoku::pasarUIAMatriz(){
    Casilla *cas;
    int cont;
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cas = (Casilla*)(ui->gridTabla->itemAtPosition(i,j)->widget());
            cont = cas->getContenido();
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
    if (QMessageBox::Yes == QMessageBox::question(this, "Guardar", "¿Desea guardar la partida actual?", QMessageBox::Yes|QMessageBox::No)){
        pasarUIAMatriz();
        QString linea=pasarMatrizAString();
        QString crypted=crypto.encryptToString(linea);
        QFile archivo("partida.txt");
        if ( !archivo.open(QIODevice::WriteOnly)) {
            QMessageBox::critical(this,"Error!","La partida no se pudo guardar");
        } else {
            QTextStream stream(&archivo);
            stream << crypted;
            stream.flush();
            QMessageBox::information(this,"Guardado!","La partida se ha guardado con éxito");
        }
    }
}

void Sudoku::on_Btn_Cargar_clicked(){
    SimpleCrypt crypto(Q_UINT64_C(0x0c2ad4a4acb9f023));
    if (QMessageBox::Yes == QMessageBox::question(this, "Cargar", "Si carga la partida, se perderá la información actual.\n¿Desea continuar?", QMessageBox::Yes|QMessageBox::No)){
            QFile archivo("partida.txt");
            if (archivo.exists("partida.txt")){
                archivo.open(QFile::ReadOnly);
                QTextStream stream(&archivo);
                QString crypt=stream.readAll();
                QString linea=crypto.decryptToString(crypt);
                pasarStringAMatriz(linea);
                pasarMatrizAUI();
                QMessageBox::information(this,"Cargado!","La partida se ha cargado con éxito");
            } else {
                QMessageBox::critical(this,"Error","No existe el archivo ");
            }
            archivo.close();
    }
}

void Sudoku::ocultarCasillas(int nivel, Tablero *t){
    int cont,tmp;
    QTime time = QTime::currentTime();
    qsrand((uint)time.msec());

    if(nivel==1) tmp=4;
    if(nivel==2) tmp=5;
    if(nivel==3) tmp=7;
    cont=tmp;
    for(int bloque=1;bloque<=9;bloque++){
        while(cont>0){
            for(int i=0;i<9;i++){
                for(int j=0;j<9;j++){
                    if(cont>0){
                        if(t->casillas[0]->buscarRegion(i+1,j+1)==bloque){
                            if(t->randInt(0,1)==1){
                                matriz[i][j]=0;
                                cont--;
                            }
                        }
                    }
                }
            }
        }
        cont=tmp;
    }
}

void Sudoku::iniciarTeclado(){
    for(int i=0; i<9; i++){
        Teclado[i]=new Digito(i+1);
        ui->gridTeclado->addWidget(Teclado[i]);
    }
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




