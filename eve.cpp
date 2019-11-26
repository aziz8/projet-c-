#include "eve.h"
#include <QDebug>
eve::eve()
{
Titre="";
Date="";
Adresse="";
}
eve::eve(QString Titre,QString Date,QString Adresse)
{
  this->Titre=Titre;
  this->Date=Date;
  this->Adresse=Adresse;
}
QString eve::get_Titre(){return  Titre;}
QString eve::get_Date(){return Date;}
QString eve::get_Adresse(){return  Adresse;}

bool eve::ajouter()
{
QSqlQuery query;
//QString res= QString::number(Titre);
query.prepare("INSERT INTO eve (TITRE, DATEE, ADRESSE) "
                    "VALUES (:Titre, :Date, :Adresse)");
query.bindValue(":Titre", Titre);
query.bindValue(":Date", Date);
query.bindValue(":Adresse", Adresse);

return    query.exec();
}

QSqlQueryModel * eve::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from eve");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("Titre"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Date "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Adresse"));
    return model;
}

bool eve::supprimer(QString Titre)
{
QSqlQuery query;
//QString res= QString::number(idd);
query.prepare("Delete from eve where TITRE = :Titre ");
query.bindValue(":Titre", Titre);
return    query.exec();
}
/*int eve::chercher(QString a)
{

}
void eve::modifier()
{
    QString Titre,Date,Adresse;
    Titre=ui->lineEdit_id_3->text()

}*/



