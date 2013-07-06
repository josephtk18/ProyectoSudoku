#include "sudoku.h"
#include "ventana_principal.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Ventana_principal vp;
    vp.show();
    
    return a.exec();
}
