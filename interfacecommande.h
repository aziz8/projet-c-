#ifndef INTERFACECOMMANDE_H
#define INTERFACECOMMANDE_H
#include "commandes.h"
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDialog>
#include <QtWidgets>
namespace Ui {
class interfacecommande;
}

class interfacecommande : public QDialog
{
    Q_OBJECT

public:
    explicit interfacecommande(QWidget *parent = nullptr);
    ~interfacecommande();

private slots:
    void on_pb_ajouter_3_clicked();

private:
    Ui::interfacecommande *ui;
    commandes tmpcommandes;
};

#endif // INTERFACECOMMANDE_H
