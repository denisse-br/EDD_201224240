#include "principal.h"
#include "ui_principal.h"
#include "QMessageBox"

principal::principal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::principal)
{
    ui->setupUi(this);
    ui->consola->setTextColor(QColor("white"));
    ui->btnsig->setEnabled(false);
    //ui->txtavion->inputMask("D");
    // int contador,turno, escritorio,mantenimiento,aviones;
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
    else{
     ui->groupBox->setDisabled(true);
     aviones=ui->txtavion->text().toInt();
     escritorio=ui->txtescritorio->text().toInt();
     mantenimiento=ui->txtmantenimiento->text().toInt();
     turno=ui->txtturnos->text().toInt();
     ui->consola->setText("***INICIO***");
     ui->consola->append("TURNOS: "+ui->txtturnos->text());
     ui->consola->append("AVIONES: "+ui->txtavion->text());
     ui->consola->append("ESCRITORIOS: "+ui->txtescritorio->text());
     ui->consola->append("ESTACIONES: "+ui->txtmantenimiento->text());
     ui->consola->append("***********************************");
     ui->btnsig->setEnabled(true);
    }

}

void principal::on_btnsig_clicked()
{

    if(contador==turno+1){
        QMessageBox::information(this,"FIN","los turnos\nhan terminado");
        ui->consola->clear();
        ui->btnsig->setEnabled(false);
        ui->groupBox->setDisabled(false);
    }else{
        ui->consola->append("[TURNO: "+QString::number(contador)+"]");
        ui->consola->append("***********************************");
    }
    contador++;
}
