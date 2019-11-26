#ifndef ACCUEIL_H
#define ACCUEIL_H

#include <QDialog>
#include "evenement.h"
#include "interfacecommande.h"
#include "interfacestock.h"
#include <QStackedLayout>
#include <QLabel>
#include <QList>

namespace Ui {
class Accueil;
}

class Accueil : public QDialog
{
    Q_OBJECT

public:
    explicit Accueil(QWidget *parent = nullptr);
    ~Accueil();

private slots:
    void on_PB_D_clicked();

    void on_PB_E_clicked();

    void on_PB_C_clicked();

    void on_PB_S_clicked();

private:
    Ui::Accueil *ui;
    QStackedLayout *stackedlayout;
    evenement *Evenement;
    interfacecommande *Interfacecommande;
    interfacestock *Interfacestock;

};

#endif // ACCUEIL_H
