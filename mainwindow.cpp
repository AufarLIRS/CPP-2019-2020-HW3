#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include "User.h"
#include "StringFunctions.h"

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow)
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
  char str1[] = "Tasks are";               // size == 10
  char str2[] = " completed!!!";           // size == 14
  char str3[] = "Tasks are completed!!!";  // size == 23

  custom_resize(str1, 10, 23);
  custom_strcat(str1, str2);
  qDebug() << strcmp(str1, str3);  // вывод равен 0 => строки равны
  qDebug() << "User clicked on submit button";

  /*
  User::addUser(User(22, "Timofey"));
  User::addUser(User(33, "Aufar"));
  User::addUser(User(44, "Valery"));
  User::addUser(User(55, "Kirill"));
  User::addUser(User(66, "Artem"));
  User::addUser(User(77, "Camila"));

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
  */
}
