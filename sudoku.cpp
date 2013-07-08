#include "sudoku.h"
#include "ui_sudoku.h"


Sudoku::Sudoku(int nivel, bool cargar, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Sudoku)
{
    ui->setupUi(this);
    setWindowTitle("Sudoku");
    setWindowIcon(QIcon("Imagenes/logo.jpg"));
    setFixedSize(width(),height());

    Tablero* t = new Tablero();
    inicializarMatriz();
    iniciarTeclado();
    t->generarTablero();
    pasarTableroAMatriz(t->casillas);
    inicializarTablasUI(t->casillas);
    ocultarCasillas(nivel,t);
    if(cargar){
        cargarPartida();
    }
    pasarMatrizAUI();

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

void Sudoku::inicializarTablasUI(Casilla *casillas[]){
    int z = 0;
    //Inicializo bloque1
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            ui->bloque1->addWidget(casillas[z],i,j);
            z++;
        }
    }
    //Inicializo bloque2
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            ui->bloque2->addWidget(casillas[z],i,j);
            z++;
        }
    }
    //Inicializo bloque3
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            ui->bloque3->addWidget(casillas[z],i,j);
            z++;
        }
    }
    //Inicializo bloque4
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            ui->bloque4->addWidget(casillas[z],i,j);
            z++;
        }
    }
    //Inicializo bloque5
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            ui->bloque5->addWidget(casillas[z],i,j);
            z++;
        }
    }
    //Inicializo bloque6
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            ui->bloque6->addWidget(casillas[z],i,j);
            z++;
        }
    }
    //Inicializo bloque7
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            ui->bloque7->addWidget(casillas[z],i,j);
            z++;
        }
    }
    //Inicializo bloque8
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            ui->bloque8->addWidget(casillas[z],i,j);
            z++;
        }
    }
    //Inicializo bloque9
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            ui->bloque9->addWidget(casillas[z],i,j);
            z++;
        }
    }
}

void Sudoku::ocultarCasillas(int nivel, Tablero *t){
    int cont,tmp;
    QTime time = QTime::currentTime();
    qsrand((uint)time.msec());

    if(nivel==1) tmp=3;
    if(nivel==2) tmp=5;
    if(nivel==3) tmp=6;
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

void Sudoku::pasarMatrizAUI(){
    Casilla *cas;
    int i1=0,i2=0,i3=0,i4=0,i5=0,i6=0,i7=0,i8=0,i9=0,j1=0,j2=0,j3=0,j4=0,j5=0,j6=0,j7=0,j8=0,j9=0;
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            int region=cas->buscarRegion(i+1,j+1);
            if(region==1){
                cas = (Casilla*)(ui->bloque1->itemAtPosition(i1,j1)->widget());
                cas->setContenido(matriz[i][j]);
                cas->setGrafic(matriz[i][j]);
                j1++;
                if(j1==3){
                    i1++;
                    j1=0;
                }
            }
            if(region==2){
                cas = (Casilla*)(ui->bloque2->itemAtPosition(i2,j2)->widget());
                cas->setContenido(matriz[i][j]);
                cas->setGrafic(matriz[i][j]);
                j2++;
                if(j2==3){
                    i2++;
                    j2=0;
                }
            }
            if(region==3){
                cas = (Casilla*)(ui->bloque3->itemAtPosition(i3,j3)->widget());
                cas->setContenido(matriz[i][j]);
                cas->setGrafic(matriz[i][j]);
                j3++;
                if(j3==3){
                    i3++;
                    j3=0;
                }
            }
            if(region==4){
                cas = (Casilla*)(ui->bloque4->itemAtPosition(i4,j4)->widget());
                cas->setContenido(matriz[i][j]);
                cas->setGrafic(matriz[i][j]);
                j4++;
                if(j4==3){
                    i4++;
                    j4=0;
                }
            }
            if(region==5){
                cas = (Casilla*)(ui->bloque5->itemAtPosition(i5,j5)->widget());
                cas->setContenido(matriz[i][j]);
                cas->setGrafic(matriz[i][j]);
                j5++;
                if(j5==3){
                    i5++;
                    j5=0;
                }
            }
            if(region==6){
                cas = (Casilla*)(ui->bloque6->itemAtPosition(i6,j6)->widget());
                cas->setContenido(matriz[i][j]);
                cas->setGrafic(matriz[i][j]);
                j6++;
                if(j6==3){
                    i6++;
                    j6=0;
                }
            }
            if(region==7){
                cas = (Casilla*)(ui->bloque7->itemAtPosition(i7,j7)->widget());
                cas->setContenido(matriz[i][j]);
                cas->setGrafic(matriz[i][j]);
                j7++;
                if(j7==3){
                    i7++;
                    j7=0;
                }
            }
            if(region==8){
                cas = (Casilla*)(ui->bloque8->itemAtPosition(i8,j8)->widget());
                cas->setContenido(matriz[i][j]);
                cas->setGrafic(matriz[i][j]);
                j8++;
                if(j8==3){
                    i8++;
                    j8=0;
                }
            }
            if(region==9){
                cas = (Casilla*)(ui->bloque9->itemAtPosition(i9,j9)->widget());
                cas->setContenido(matriz[i][j]);
                cas->setGrafic(matriz[i][j]);
                j9++;
                if(j9==3){
                    i9++;
                    j9=0;
                }
            }
        }
    }
}

void Sudoku::iniciarTeclado(){
    for(int i=0; i<9; i++){
        Teclado[i]=new Digito(i+1);
        ui->gridTeclado->addWidget(Teclado[i]);
    }
}

void Sudoku::pasarUIAMatriz(){
    Casilla *cas;
    int cont,f=0,c=0;
    //Bloque 1
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cas = (Casilla*)(ui->bloque1->itemAtPosition(i,j)->widget());
            cont = cas->getContenido();
            matriz[i][j]=cont;
        }
    }
    //Bloque 2
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cas = (Casilla*)(ui->bloque2->itemAtPosition(i,j)->widget());
            cont = cas->getContenido();
            matriz[i][j+3]=cont;
        }
    }
    //Bloque 3
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cas = (Casilla*)(ui->bloque3->itemAtPosition(i,j)->widget());
            cont = cas->getContenido();
            matriz[i][j+6]=cont;
            c++;
        }
    }
    //Bloque 4
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cas = (Casilla*)(ui->bloque4->itemAtPosition(i,j)->widget());
            cont = cas->getContenido();
            matriz[i+3][j]=cont;
        }
    }
    //Bloque 5
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cas = (Casilla*)(ui->bloque5->itemAtPosition(i,j)->widget());
            cont = cas->getContenido();
            matriz[i+3][j+3]=cont;
        }
    }
    //Bloque 6
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cas = (Casilla*)(ui->bloque6->itemAtPosition(i,j)->widget());
            cont = cas->getContenido();
            matriz[i+3][j+6]=cont;
        }
    }
    //Bloque 7
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cas = (Casilla*)(ui->bloque7->itemAtPosition(i,j)->widget());
            cont = cas->getContenido();
            matriz[i+6][j]=cont;
        }
    }
    //Bloque 8
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cas = (Casilla*)(ui->bloque8->itemAtPosition(i,j)->widget());
            cont = cas->getContenido();
            matriz[i+6][j+3]=cont;
        }
    }
    //Bloque 9
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cas = (Casilla*)(ui->bloque9->itemAtPosition(i,j)->widget());
            cont = cas->getContenido();
            matriz[i+6][j+6]=cont;
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

void Sudoku::cargarPartida(){
    SimpleCrypt crypto(Q_UINT64_C(0x0c2ad4a4acb9f023));
    //if (QMessageBox::Yes == QMessageBox::question(this, "Cargar", "Si carga la partida, se perderá la información actual.\n¿Desea continuar?", QMessageBox::Yes|QMessageBox::No)){
            QFile archivo("partida.txt");
            if (archivo.exists("partida.txt")){
                archivo.open(QFile::ReadOnly);
                QTextStream stream(&archivo);
                QString crypt=stream.readAll();
                QString linea=crypto.decryptToString(crypt);
                pasarStringAMatriz(linea);
                pasarMatrizAUI();
                //QMessageBox::information(this,"Cargado!","La partida se ha cargado con éxito");
            } else {
                QMessageBox::critical(this,"Error","No existe el archivo ");
            }
            archivo.close();
    //}
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




