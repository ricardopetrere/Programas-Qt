#ifndef FRDADOSCALCULADOS_H
#define FRDADOSCALCULADOS_H

#include <QMainWindow>

namespace Ui {
class frDadosCalculados;
}

class frDadosCalculados : public QMainWindow
{
    Q_OBJECT

public:
    explicit frDadosCalculados(QWidget *parent = 0);
    frDadosCalculados(QWidget *parent,double p_consumo_diario,double p_consumo_diario_indicado);
    ~frDadosCalculados();

private slots:
    void on_btnFechar_clicked();

    void on_btnRecalcular_clicked();

    void on_btnRetornar_clicked();

private:
    Ui::frDadosCalculados *ui;
};

#endif // FRDADOSCALCULADOS_H
