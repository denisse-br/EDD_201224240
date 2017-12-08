#include "principal.h"
#include "ui_principal.h"
#include "QMessageBox"

principal::principal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::principal)
{
    ui->setupUi(this);
    ui->consola->setTextColor(QColor("white"));
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
     ui->groupBox->setDisabled(true);
}
