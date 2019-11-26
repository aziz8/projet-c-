#ifndef INTERFACESTOCK_H
#define INTERFACESTOCK_H
#include "stock.h"
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDialog>
#include <QtWidgets>
namespace Ui {
class interfacestock;
}

class interfacestock : public QDialog
{
    Q_OBJECT

public:
    explicit interfacestock(QWidget *parent = nullptr);
    ~interfacestock();

private slots:
    void on_pb_ajouter_stock_clicked();
    void on_pb_supprimer_stock_clicked();



    void on_on_pb_ajouter_stock_clicked();

   // void on_pb_ajouter_4_clicked();

    void on_pb_ajouter_4_clicked();

private:
    Ui::interfacestock *ui;
    stock tmpstock;
};

#endif // INTERFACESTOCK_H
