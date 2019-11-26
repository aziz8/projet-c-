#ifndef CONEXSTOCK_H
#define CONEXSTOCK_H
#include <QSqlDatabase>

class conexstock
{
private:
    QSqlDatabase db;
public:
    conexstock();
    bool ouvrirConnexion();
    void fermerConnexion();
};

#endif // CONEXSTOCK_H
