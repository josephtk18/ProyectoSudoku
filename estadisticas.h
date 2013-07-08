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
    void setBackgroundImage();
    QString cargarGanadores();
    void anadirGanadores(QString ganadores);
    ~Estadisticas();
    
private:
    Ui::Estadisticas *ui;
};

#endif // ESTADISTICAS_H
