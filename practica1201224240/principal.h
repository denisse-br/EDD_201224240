#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>

namespace Ui {
class principal;
}

class principal : public QMainWindow
{
    Q_OBJECT

public:
    explicit principal(QWidget *parent = 0);
    int contador=1,turno, escritorio,mantenimiento,aviones;
    ~principal();

private slots:
    void on_pushButton_clicked();


    void on_btnsig_clicked();

private:
    Ui::principal *ui;
};

#endif // PRINCIPAL_H
