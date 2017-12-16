#include "principal.h"
#include "ui_principal.h"
#include "QMessageBox"
#include "avion.h"
#include "graficar.h"
#include "mantenimiento.h"
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
    srand(time(NULL));
    ld=NULL;
    ls=NULL;
    c=NULL;
    pas=NULL;
    lc=NULL;
    le=NULL;
    if(ui->txtavion->text()==""||ui->txtescritorio->text()==""||ui->txtmantenimiento->text()==""||ui->txtturnos->text()==""){
        QMessageBox::warning(this, "Error", "Datos iniciales no pueden estar vacios,\ningrese un dato");
    }
    else{
     ui->groupBox->setDisabled(true);
     aviones=ui->txtavion->text().toInt();
     escritorio=ui->txtescritorio->text().toInt();
     mantenimiento=ui->txtmantenimiento->text().toInt();
     turno=ui->txtturnos->text().toInt();
     for(int i=1;i<=mantenimiento;i++){
        insertarEstacion(&ls,i,0,0,0);
     }
     ranav=rand()%(3-1+1)+1;
     if(ranav==1){//peque
         tama="Pequeño";
         des=1;
         ranpas=rand()%(10-5+1)+5;
         ranman=rand()%(3-1+1)+1;
         insertar(&ld,contador,ranav,ranpas,des,ranman);
     }else if(ranav==2){//med
         tama="Mediano";
         des=2;
         ranpas=rand()%(25-15+1)+15;
         ranman=rand()%(4-2+1)+2;
         insertar(&ld,contador,ranav,ranpas,des,ranman);
     }else if(ranav==3){//grande
         tama="Grande";
         des=3;
         ranpas=rand()%(40-30+1)+30;
         ranman=rand()%(6-3+1)+3;
         insertar(&ld,contador,ranav,ranpas,des,ranman);
     }
     contadorav++;
     ui->consola->setText("***INICIO***");
     ui->consola->append("AVIONES QUE SE INSERTARAN: "+QString::number(aviones));
     ui->consola->append("ESCRITORIOS DE REGISTRO: "+QString::number(escritorio));
     ui->consola->append("ESTACIONES DE MANTENIMIENTO: "+QString::number(mantenimiento));
     ui->consola->append("TURNOS DEL SISTEMA: "+QString::number(turno));
     ui->consola->append("***********************************");
     ui->consola->append("\n");
     ui->consola->append("[TURNO: "+QString::number(contador)+"]");
     ui->consola->append("Arribó avion "+tama);
     ui->consola->append("ID avion: "+QString::number(contador));
     ui->consola->append("Avion desabordando: Ninguno");
     imprimirconsola(ui->consola,&ls);
     ui->consola->append("***********************************");




     contador++;
     char ide;
     int idec;
     srand(time(NULL));
     if(escritorio<=27){
         for(int i=0;i<escritorio;i++){
             idec=rand()%(90-65+1)+65;
             while(existe(&le,ide)){
                 idec=rand()%(90-65+1)+65;
             }
             insertarEscritorio(&le,(char)idec);
         }
     }

     mostrare(&le);

     graficar *g = new graficar(&ld,&ls,&c,&pas,&lc,&le);
     ui->btnsig->setEnabled(true);
    }

}

void principal::on_btnsig_clicked()
{
    srand(time(NULL));
    if(contador>turno){
        QMessageBox::information(this,"FIN","los turnos\nhan terminado");
        mostrar(&ld);
        contador=0;
        contadorav=0;
        ld=NULL;
        ls=NULL;
        ui->consola->clear();
        ui->btnsig->setEnabled(false);
        ui->groupBox->setDisabled(false);
    }else{
        ui->consola->append("[TURNO: "+QString::number(contador)+"]");
        if(contadorav>aviones){
            QMessageBox::information(this,"AVIONES","Se han insertado todos los aviones posibles");
        }else{
            ranav=rand()%(3-1+1)+1;
            if(ranav==1){//peque
                tama="Pequeño";
                des=1;
                ranpas=rand()%(10-5+1)+5;
                ranman=rand()%(3-1+1)+1;
                insertar(&ld,contador,ranav,ranpas,des,ranman);
            }else if(ranav==2){//med
                tama="Mediano";
                des=2;
                ranpas=rand()%(25-15+1)+15;
                ranman=rand()%(4-2+1)+2;
                insertar(&ld,contador,ranav,ranpas,des,ranman);
            }else if(ranav==3){//grande
                tama="Grande";
                des=3;
                ranpas=rand()%(40-30+1)+30;
                ranman=rand()%(6-3+1)+3;
                insertar(&ld,contador,ranav,ranpas,des,ranman);
            }
            ui->consola->append("Arribó avion "+tama);
            ui->consola->append("ID avion: "+QString::number(contador));

        }

        if(vacia(&ld)){
             ui->consola->append("Todos los aviones han desabordado");
        }else{
        if(ld->turnos>0){
            ui->consola->append("Avion desabordando:"+QString::number(ld->id));
            int auxp;
            if(!vacia(&ld)){
                auxp=ld->pasajeros;
            }
            restar(&ld,&ls,&c,&pas,&lc);
            /*if(ld->turnos == 0){
                contadorp+=auxp;
            }*/

        }else{                
                restar(&ld,&ls,&c,&pas,&lc);
                if(vacia(&ld)){
                    ui->consola->append("Todos los aviones han desabordado");
                }else{
                 int auxp=ld->pasajeros;
                 restar(&ld,&ls,&c,&pas,&lc);
                 /*if(ld->turnos == 0){
                     contadorp+=auxp;
                 }*/
                 ui->consola->append("Avion desabordando:"+QString::number(ld->id));
                }

          }
        }
        restarMan(&ls,&c);


        imprimirconsola(ui->consola,&ls);
        ui->consola->append("***********************************");
        graficar *g = new graficar(&ld, &ls,&c,&pas,&lc,&le);
    }
    contador++;
    contadorav++;
}
