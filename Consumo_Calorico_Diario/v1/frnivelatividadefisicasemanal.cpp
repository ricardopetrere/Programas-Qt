#include "frnivelatividadefisicasemanal.h"
#include "ui_frnivelatividadefisicasemanal.h"
#include "frmetaperdacalorica.h"

frMetaPerdaCalorica *formMetaPerdaCalorica;
double TMB;

frNivelAtividadeFisicaSemanal::frNivelAtividadeFisicaSemanal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::frNivelAtividadeFisicaSemanal)
{
    ui->setupUi(this);
}

frNivelAtividadeFisicaSemanal::frNivelAtividadeFisicaSemanal(QWidget *parent, double p_TMB) :
    frNivelAtividadeFisicaSemanal(parent)
{
    TMB=p_TMB;
    ui->lineTMB->setText(QString::number(TMB));
}

frNivelAtividadeFisicaSemanal::~frNivelAtividadeFisicaSemanal()
{
    delete ui;
}

void frNivelAtividadeFisicaSemanal::on_btnRetornar_clicked()
{
    close();
}

void frNivelAtividadeFisicaSemanal::on_btnConfirmar_clicked()
{
    double const_calorias_gastas;
    if(ui->rb0a1->isChecked())
    {
        const_calorias_gastas=1.2;
    }
    else if(ui->rb1a3->isChecked())
    {
        const_calorias_gastas=1.375;
    }
    else if(ui->rb3a5->isChecked())
    {
        const_calorias_gastas=1.55;
    }
    else if(ui->rb5a7->isChecked())
    {
        const_calorias_gastas=1.725;
    }
    else
    {
        const_calorias_gastas=1.9;
    }
    double consumo_calorico_diario = TMB*const_calorias_gastas;
    formMetaPerdaCalorica = new frMetaPerdaCalorica(this,consumo_calorico_diario);
    formMetaPerdaCalorica->setWindowModality(Qt::WindowModal);
    formMetaPerdaCalorica->show();
}
