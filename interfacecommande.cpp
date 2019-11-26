#include "interfacecommande.h"
#include "ui_interfacecommande.h"
#include <QMessageBox>

interfacecommande::interfacecommande(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::interfacecommande)
{
    ui->setupUi(this);
     ui->tabcommandes->setModel(tmpcommandes.afficher());
}

interfacecommande::~interfacecommande()
{
    delete ui;
}

void interfacecommande::on_pb_ajouter_3_clicked()
{
    QString nomlivre = ui->lineEdit_id_4->text();
    QString adresse= ui->lineEdit_adresse->text();
    int datedelivraison= ui->lineEdit_ddl->text().toInt();
    int idclient= ui->lineEdit_idclient->text().toInt();
    float prix=ui->lineEdit_prix->text().toInt();
  commandes IC(nomlivre,adresse,datedelivraison,idclient,prix);
  bool test=IC.ajouter();
  if(test)
  {
    ui->tabcommandes->setModel(tmpcommandes.afficher());//refresh
      // ui->tabstock->setModel(tmpstock.afficher());
QMessageBox::information(nullptr, QObject::tr("Ajouter un évenement"),
                  QObject::tr("Evenement ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un événement"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
}
