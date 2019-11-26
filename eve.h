#ifndef EVE_H
#define EVE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class eve
{
public:
    eve();
    eve(QString,QString,QString);
    QString get_Titre();
    QString get_Date();
    QString get_Adresse();
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(QString);
    void modifier();
    int chercher(QString);

private:
    QString Titre,Date,Adresse;
};


#endif // EVE_H
