#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>
#include "avion.h"
namespace Ui {
class principal;
}

class principal : public QMainWindow
{
    Q_OBJECT

public:
    explicit principal(QWidget *parent = 0);
    listadoble ld;
    int contador=1,turno, escritorio,mantenimiento,aviones;
    int ranav,ranpas,ranman,des;//aviones
    QString tama;

    ~principal();

private slots:
    void on_pushButton_clicked();


    void on_btnsig_clicked();

private:
    Ui::principal *ui;
};

#endif // PRINCIPAL_H
