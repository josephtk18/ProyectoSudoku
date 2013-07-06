#include "sudoku.h"
#include "ventana_principal.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Sudoku w;
    Ventana_principal vp;
    vp.show();
    //w.show();
    
    return a.exec();
}
