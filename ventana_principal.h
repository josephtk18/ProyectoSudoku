#ifndef VENTANA_PRINCIPAL_H
#define VENTANA_PRINCIPAL_H

#include <QMainWindow>
#include <QPalette>
#include <QtGui>
#include <QMessageBox>
#include <acercade.h>
#include <ventana_jugar.h>
#include <ayuda.h>

namespace Ui {
class Ventana_principal;
}

class Ventana_principal : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Ventana_principal(QWidget *parent = 0);
    ~Ventana_principal();
    void setBackgroundImage();
    
private slots:
    void on_Btn_Iniciar_clicked();
    void on_Btn_estadisticas_clicked();
    void on_Btn_Ayuda_clicked();
    void on_Btn_acercaDe_clicked();
    void on_Btn_Salir_clicked();

private:
    Ui::Ventana_principal *ui;
};

#endif // VENTANA_PRINCIPAL_H
