#include "principal.h"
#include "ui_principal.h"
#include "QMessageBox"

principal::principal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::principal)
{
    ui->setupUi(this);
    ui->consola->setTextColor(QColor("white"));
    int contador,turno, escritorio,mantenimiento,aviones;
}

principal::~principal()
{
    delete ui;
}

void principal::on_pushButton_clicked()
{
    if(ui->txtavion->text()==""||ui->txtescritorio->text()==""||ui->txtmantenimiento->text()==""||ui->txtturnos->text()==""){
        QMessageBox::warning(this, "Error", "Datos iniciales no pueden estar vacios,\ningrese un dato");
    }
    else if(ui->txtavion->text()!=""&&ui->txtescritorio->text()!=""&&ui->txtmantenimiento->text()!=""&&ui->txtturnos->text()!=""){

    }
    else{
     ui->groupBox->setDisabled(true);
     ui->consola->setText("***INICIO***");
     ui->consola->append("TURNOS: ");
     ui->consola->append("AVIONES: ");
     ui->consola->append("ESCRITORIOS: ");
     ui->consola->append("ESTACIONES: ");
    }

}
