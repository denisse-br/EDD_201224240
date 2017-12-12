#include "principal.h"
#include "ui_principal.h"
#include "QMessageBox"
#include "avion.h"

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
    ld=NULL;

    if(ui->txtavion->text()==""||ui->txtescritorio->text()==""||ui->txtmantenimiento->text()==""||ui->txtturnos->text()==""){
        QMessageBox::warning(this, "Error", "Datos iniciales no pueden estar vacios,\ningrese un dato");
    }
    else{
     ui->groupBox->setDisabled(true);
     aviones=ui->txtavion->text().toInt();
     escritorio=ui->txtescritorio->text().toInt();
     mantenimiento=ui->txtmantenimiento->text().toInt();
     turno=ui->txtturnos->text().toInt();
     ranav=rand()%(3-1+1)+1;
     if(ranav==1){//peque
         tama="Pequeño";
         des=1;
         ranpas=rand()%(10-5+1)+5;
         ranman=rand()%(3-1+1)+1;
         insertar(&ld,ranav,ranpas,des,ranman);
     }else if(ranav==2){//med
         tama="Mediano";
         des=2;
         ranpas=rand()%(10-5+1)+5;
         ranman=rand()%(3-1+1)+1;
         insertar(&ld,ranav,ranpas,des,ranman);
     }else if(ranav==3){//grande
         tama="Grande";
         des=3;
         ranpas=rand()%(10-5+1)+5;
         ranman=rand()%(3-1+1)+1;
         insertar(&ld,ranav,ranpas,des,ranman);
     }
     ui->consola->setText("***INICIO***");
     ui->consola->append("[TURNO: "+QString::number(contador)+"]");
     ui->consola->append("Arribó avion "+tama);
     ui->consola->append("TURNOS: "+QString::number(turno));
     ui->consola->append("AVIONES: "+QString::number(aviones));
     ui->consola->append("ESCRITORIOS: "+QString::number(escritorio));
     ui->consola->append("ESTACIONES: "+QString::number(mantenimiento));
     ui->consola->append("***********************************");
     contador++;
     ui->btnsig->setEnabled(true);
    }

}

void principal::on_btnsig_clicked()
{

    if(contador>turno){
        QMessageBox::information(this,"FIN","los turnos\nhan terminado");
        mostrar(&ld);
        contador=0;
        ld=NULL;
        ui->consola->clear();
        ui->btnsig->setEnabled(false);
        ui->groupBox->setDisabled(false);
    }else{
        ui->consola->append("[TURNO: "+QString::number(contador)+"]");
        ranav=rand()%(3-1+1)+1;
        if(ranav==1){//peque
            tama="Pequeño";
            des=1;
            ranpas=rand()%(10-5+1)+5;
            ranman=rand()%(3-1+1)+1;
            insertar(&ld,ranav,ranpas,des,ranman);
        }else if(ranav==2){//med
            tama="Mediano";
            des=2;
            ranpas=rand()%(10-5+1)+5;
            ranman=rand()%(3-1+1)+1;
            insertar(&ld,ranav,ranpas,des,ranman);
        }else if(ranav==3){//grande
            tama="Grande";
            des=3;
            ranpas=rand()%(10-5+1)+5;
            ranman=rand()%(3-1+1)+1;
            insertar(&ld,ranav,ranpas,des,ranman);
        }
        ui->consola->append("ARRIVO AVION "+tama);
        ui->consola->append("***********************************");
    }
    contador++;
}
