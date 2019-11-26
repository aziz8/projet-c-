#include "connexion.h"
#include <exception>
Connexion::Connexion()
{}

bool Connexion::ouvrirConnexion()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("aziz");
    db.setUserName("system");
    db.setPassword("aziz");
if (db.open())
    test=true;
return  test;
}
void Connexion::fermerConnexion()
{db.close();}
