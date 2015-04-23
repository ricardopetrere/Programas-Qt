#ifndef FRNIVELATIVIDADEFISICASEMANAL_H
#define FRNIVELATIVIDADEFISICASEMANAL_H

#include <QMainWindow>

namespace Ui {
class frNivelAtividadeFisicaSemanal;
}

class frNivelAtividadeFisicaSemanal : public QMainWindow
{
    Q_OBJECT

public:
    explicit frNivelAtividadeFisicaSemanal(QWidget *parent = 0);
    frNivelAtividadeFisicaSemanal(QWidget *parent, double TMB);
    ~frNivelAtividadeFisicaSemanal();

private slots:
    void on_btnRetornar_clicked();

    void on_btnConfirmar_clicked();

private:
    Ui::frNivelAtividadeFisicaSemanal *ui;
};

#endif // FRNIVELATIVIDADEFISICASEMANAL_H
