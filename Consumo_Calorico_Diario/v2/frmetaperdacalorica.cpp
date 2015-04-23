#include "frmetaperdacalorica.h"
#include "ui_frmetaperdacalorica.h"
#include "frdadoscalculados.h"

frDadosCalculados *formDadosCalculados;
double consumo_calorico_diario;

frMetaPerdaCalorica::frMetaPerdaCalorica(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::frMetaPerdaCalorica)
{
    ui->setupUi(this);
}

frMetaPerdaCalorica::frMetaPerdaCalorica(QWidget *parent, double p_consumo_calorico_diario):
    frMetaPerdaCalorica(parent)
{
    consumo_calorico_diario=p_consumo_calorico_diario;
    ui->lineConsumoCaloricoDiario->setText(QString::number(consumo_calorico_diario));
}

frMetaPerdaCalorica::~frMetaPerdaCalorica()
{
    delete ui;
}

void frMetaPerdaCalorica::on_btnRetornar_clicked()
{
    close();
}

void frMetaPerdaCalorica::on_btnConfirmar_clicked()
{
    int const_qtde_perda_desejada = 1000;
    double qtde_perda_semanal;
    if(ui->rb0_3->isChecked())
    {
        qtde_perda_semanal=0.3;
    }
    else if(ui->rb0_5->isChecked())
    {
        qtde_perda_semanal=0.5;
    }
    else if(ui->rb0_7->isChecked())
    {
        qtde_perda_semanal=0.7;
    }
    else if(ui->rb0_9->isChecked())
    {
        qtde_perda_semanal=0.7;
    }
    else if(ui->rb1_0->isChecked())
    {
        qtde_perda_semanal=1.0;
    }
    else if(ui->rb1_2->isChecked())
    {
        qtde_perda_semanal=1.2;
    }
    else if(ui->rb1_4->isChecked())
    {
        qtde_perda_semanal=1.4;
    }
    else if(ui->rb1_5->isChecked())
    {
        qtde_perda_semanal=1.5;
    }

    double consumo_diario_indicado=consumo_calorico_diario-(const_qtde_perda_desejada*qtde_perda_semanal);
    formDadosCalculados=new frDadosCalculados(this,consumo_calorico_diario,consumo_diario_indicado);
    formDadosCalculados->setWindowModality(Qt::WindowModal);
    formDadosCalculados->show();
}
