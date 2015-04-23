#include "frdadoscalculados.h"
#include "ui_frdadoscalculados.h"

frDadosCalculados::frDadosCalculados(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::frDadosCalculados)
{
    ui->setupUi(this);
}

frDadosCalculados::frDadosCalculados(QWidget *parent, double p_consumo_calorico_diario, double p_consumo_diario_indicado):
    frDadosCalculados(parent)
{
    ui->lineConsumoCaloricoDiario->setText(QString::number(p_consumo_calorico_diario));
    ui->lineConsumoDiarioIndicado->setText(QString::number(p_consumo_diario_indicado));
}

frDadosCalculados::~frDadosCalculados()
{
    delete ui;
}

void frDadosCalculados::on_btnFechar_clicked()
{
    exit(0);
}

void frDadosCalculados::on_btnRetornar_clicked()
{
    close();
}
