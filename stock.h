#ifndef STOCK_H
#define STOCK_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDialog>


/*namespace Ui {
class stock;
}*/

class stock
{
public:
    stock() ;
    stock(int,QString,QString);
  QString get_categorie() ;
 int get_idstock() ;
  QString get_adresse() ;
  bool ajouter();
    QSqlQueryModel * afficher();
     bool supprimer(int);
     bool modifier(int,QString,QString);

private:
    QString adresse,categorie;
    int idstock ;
};

/*public:
    explicit stock(QWidget *parent = nullptr);
    ~stock();

private:
    Ui::stock *ui;
*/

#endif // STOCK_H
