#ifndef ESTADISTICAS_H
#define ESTADISTICAS_H

#include <QMainWindow>
#include <QFile>
#include <QTextStream>

namespace Ui {
class Estadisticas;
}

class Estadisticas : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Estadisticas(QWidget *parent = 0);
    /**
         @brief Coloca como fondo de ventana una imagen.
         */
    void setBackgroundImage();
    /**
         @brief Carga los ganadores guardados previamente.
         @return Retorna un string con el ganador.
         */
    QString cargarGanadores();
    /**
         @brief Coloca los ganadores en la venta 'Estadísticas'.
         @param Recibe el Strin del ganador.
         @see cargarGanadores();
         */
    void anadirGanadores(QString ganadores);
    ~Estadisticas();
    
private:
    Ui::Estadisticas *ui;
};

#endif // ESTADISTICAS_H
