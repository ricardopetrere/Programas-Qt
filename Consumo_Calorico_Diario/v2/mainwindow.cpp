#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "frnivelatividadefisicasemanal.h"

frNivelAtividadeFisicaSemanal* formNivelAtividadeFisicaSemanal;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnConfirmar_clicked()
{
    int idade = ui->lineIdade->text().toInt();
    double altura = ui->lineAltura->text().toDouble();
    double peso = ui->linePeso->text().toDouble();
    double TMB,const_TMB,const_peso,const_altura,const_idade;
    if(ui->rbHomem->isChecked())
    {
        const_TMB=88.362;
        const_peso = 13.397;
        const_altura = 4.799;
        const_idade = 5.677;
    }
    else
    {
        const_TMB=447.593;
        const_peso = 9.247;
        const_altura = 3.098;
        const_idade = 4.330;
    }
    TMB= const_TMB+(const_peso*peso)+(const_altura*altura)+(const_idade*idade);
    formNivelAtividadeFisicaSemanal=new frNivelAtividadeFisicaSemanal(this,TMB);
    formNivelAtividadeFisicaSemanal->setWindowModality(Qt::WindowModal);
    formNivelAtividadeFisicaSemanal->show();
}

void MainWindow::on_btnFechar_clicked()
{
    exit(0);
}
