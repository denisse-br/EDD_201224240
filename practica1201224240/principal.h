#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>
#include "avion.h"
#include "mantenimiento.h"
#include "esperamantenimiento.h"
#include "escritorio.h"
#include <time.h>
namespace Ui {
class principal;
}

class principal : public QMainWindow
{
    Q_OBJECT

public:
    explicit principal(QWidget *parent = 0);
    listadoble ld;
    listasimple ls;
    iniciocp c;
    iniciop pas;
    listacircular lc;
    listadobleE le;
    QPixmap pixmap;
    int contadorp=0;
    int contador=1,turno, escritorio,mantenimiento,aviones;
    int ranav,ranpas,ranman,des,contadorav=1;//aviones
    QString tama;

    ~principal();

private slots:
    void on_pushButton_clicked();


    void on_btnsig_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::principal *ui;
};

#endif // PRINCIPAL_H
