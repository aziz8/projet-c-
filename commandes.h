#ifndef COMMANDES_H
#define COMMANDES_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDialog>

/*namespace Ui {
class commandes;
}*/

class commandes
{ public:
    commandes() ;
    commandes(QString,QString,int,int,float);
  QString get_nomlivre() ;
 int get_idclient() ;
  QString get_adresse() ;
  float get_prix ;
  int get_datedelivraison();
  bool ajouter();
    QSqlQueryModel * afficher();
     bool supprimer(int);
private:
    QString adresse,nomlivre;
    int datedelivraison,idclient;
    float prix ;


/*
public:
    explicit commandes(QWidget *parent = nullptr);
    ~commandes();

private:
    Ui::commandes *ui;*/
};

#endif // COMMANDES_H
