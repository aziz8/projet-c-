#include "commandes.h"

/*commandes::commandes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::commandes)
{
    ui->setupUi(this);
}

commandes::~commandes()
{
    delete ui;
}
*/
commandes::commandes()
{
   idclient=0 ;
    adresse="" ;
    prix =0.0;
    datedelivraison=0 ;

}
commandes::commandes(QString nomlivre,QString adresse,int idclient,int datedelivraison,float prix)
{
    this->nomlivre=nomlivre;
    this->idclient=idclient;
    this->adresse=adresse ;
    this->prix=prix ;
    this->datedelivraison=datedelivraison ;


}
QString commandes::get_nomlivre(){return  nomlivre;}
int commandes::get_idclient(){return idclient;}
int commandes::get_datedelivraison(){return  datedelivraison;}

QString commandes::get_adresse(){return adresse ;}
bool commandes::ajouter()
{
QSqlQuery query;
QString res= QString::number(idclient);

query.prepare("INSERT INTO COMMANDES (NOM_LIVRE,ID_CLIENT,ADRESSE,DATEDELIVRAISON,PRIX) "
                    "VALUES (:nomlivre, :idclient, :adresse, :datedelivraison, :prix)");
query.bindValue(":nomlivre",nomlivre);

query.bindValue(":prenom", idclient);
query.bindValue(":adresse", adresse);
query.bindValue(":prix", prix);
query.bindValue(":datedelivraison", datedelivraison);

return    query.exec();
}
QSqlQueryModel * commandes::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from COMMANDES");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("nomlivre"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("idclient "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("adresse"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("datedelivraison"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("prix"));
    return model;
}
bool commandes::supprimer(int idclient)
{
QSqlQuery query;
//QString res= QString::number(idd);
query.prepare("Delete from COMMANDES where ID_CLIENT = :idclient ");
query.bindValue(":idclient", idclient);
return    query.exec();
}



