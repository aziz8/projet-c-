#include "conexstock.h"
#include<exception>

conexstock::conexstock()
{}

bool conexstock::ouvrirConnexion()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("aziz");
    db.setUserName("system");
    db.setPassword("aziz");
if (db.open())
    test=true;
else
    throw QString ("Erreur Paramétres"+test);
return  test;
}
void conexstock::fermerConnexion()
{db.close();}
