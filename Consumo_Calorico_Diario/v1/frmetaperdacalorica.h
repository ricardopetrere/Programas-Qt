#ifndef FRMETAPERDACALORICA_H
#define FRMETAPERDACALORICA_H

#include <QMainWindow>

namespace Ui {
class frMetaPerdaCalorica;
}

class frMetaPerdaCalorica : public QMainWindow
{
    Q_OBJECT

public:
    explicit frMetaPerdaCalorica(QWidget *parent = 0);
    frMetaPerdaCalorica(QWidget *parent,double p_consumo_calorico_diario);
    ~frMetaPerdaCalorica();

private slots:
    void on_btnRetornar_clicked();

    void on_btnConfirmar_clicked();

private:
    Ui::frMetaPerdaCalorica *ui;
};

#endif // FRMETAPERDACALORICA_H
