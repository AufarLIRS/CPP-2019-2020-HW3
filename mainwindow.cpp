#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <user.h>


MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

std::vector<User> User::users_;

void MainWindow::on_submitPushButton_clicked()
{
    qDebug() << "User clicked on submit button";

    User::addUser(User(22,"Timofey"));
    User::addUser(User(33,"Aufar"));
    User::addUser(User(44,"Valery"));
    User::addUser(User(55,"Kirill"));
    User::addUser(User(66,"Artem"));
    User::addUser(User(77,"Camila"));

    qDebug() << "Current students' count: " << User::getCount();
    qDebug() << "All students: ";
    qDebug() << User::getAllNames();
    qDebug() << "Removing user at 4 index";

    User::removeUserAt(4);

    qDebug() << "Current Students' Count: " << User::getCount();
    qDebug() << "All students: ";
    qDebug() << User::getAllNames();
    qDebug() << "Removing user named Aufar ";

    User::removeUserByName("Aufar");

    qDebug() << "Current Students' Count: " << User::getCount();
    qDebug() << "All students: ";
    qDebug() << User::getAllNames();


    // Тестируем конкатенцию слов и resize
    /*
    char *start = "Hello, " + '\0';
    char *from = "world!" + '\0';
    char *to = (char*)malloc(strlen(start) + strlen(from) + 1);   // выделяем для to место для двух слов
    memcpy(to, start, strlen(start) + 1);                         // to = "Hello, "
    User::strcat(to, from);                                       // to = "Hello, world!"
    qDebug() << to;
    */

    // Тестируем конкатенцию слов и resize
    char *to = "Hello, " + '\0';
    char *from = "world!" + '\0';
    to = User::resize(to, strlen(to) + 1, strlen(to) + strlen(from) + 1); // выделяем для to место для двух слов
    User::strcat(to, from);                                               // to = "Hello, world!"
    qDebug() << to;
}
