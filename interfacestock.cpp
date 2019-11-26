#include "interfacestock.h"
#include "ui_interfacestock.h"
#include <QMessageBox>

interfacestock::interfacestock(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::interfacestock)
{
    ui->setupUi(this);
     ui->tabstock->setModel(tmpstock.afficher());
}

interfacestock::~interfacestock()
{
    delete ui;
}


void interfacestock::on_pb_supprimer_stock_clicked()
{
    int idstock =ui->lineEdit_id_5->text().toInt();
    bool test=tmpstock.supprimer(idstock);
    if(test)
    {ui->tabstock->setModel(tmpstock.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer un stock"),
                    QObject::tr("Stock supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un stock"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}

void interfacestock::on_on_pb_ajouter_stock_clicked()
{
    QString adresse= ui->lineEdit_adresse->text();
    int idstock= ui->lineEdit_stock->text().toInt();
    QString categorie=ui->lineEdit_categorie->text();
    stock IC(idstock,adresse,categorie);
    bool test=IC.ajouter();
  if(test)
  {
    ui->tabstock->setModel(tmpstock.afficher());//refresh
QMessageBox::information(nullptr, QObject::tr("Ajouter un stock"),
                  QObject::tr("Stock ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un stock"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}





void interfacestock::on_pb_ajouter_4_clicked()
{QString adresse= ui->lineEdit_adressem->text();
    int idstock= ui->lineEdit_stockm->text().toInt();
    QString categorie=ui->lineEdit_categoriem->text();

    bool test=tmpstock.modifier(idstock,adresse,categorie);

    if(test)
    {
      ui->tabstock->setModel(tmpstock.afficher());//refresh
  QMessageBox::information(nullptr, QObject::tr("modifier un stock"),
                    QObject::tr("Stock modifié.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

  }
    else
        QMessageBox::critical(nullptr, QObject::tr("modifier un stock"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

  }








