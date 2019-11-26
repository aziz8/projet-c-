#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "accueil.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/img/image/Books.jpg");
    ui->label_pix->setPixmap(pix);
    QPixmap pix_log_img1(":/img/image/loginImg1.png");
    ui->label_Login_img1->setPixmap(pix_log_img1);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_PBconnexion_clicked()
{
       accueil = new Accueil(this);
       accueil->show();

}
