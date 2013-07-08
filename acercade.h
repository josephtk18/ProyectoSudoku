#ifndef ACERCADE_H
#define ACERCADE_H

#include <QMainWindow>

namespace Ui {
class AcercaDe;
}

class AcercaDe : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit AcercaDe(QWidget *parent = 0);
    ~AcercaDe();
    /**
        @brief Establece una imagen de fondo.
        Coloca como background una imagen previamente cargada en la ventana 'Acerca De'
        */
    void setBackgroundImage();
    
private:
    Ui::AcercaDe *ui;
};

#endif // ACERCADE_H
