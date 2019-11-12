#include "mainwindow.h"
#include "ResizeFunc.h"
#include "StrcatFunc.h"
#include "User.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>

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
  qDebug() << "User clicked on submit button";

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

  auto a = User(666, "Devil");
  qDebug() << a.getName() + "\'s Age:" << a.getAge();

  char char1[12] = "First";
  char char2[] = "Second";
  qDebug() << char1;
  qDebug() << char2;
  strcatvoid(char1, char2);
  qDebug() << "Super Deep Cat Func Check starting...";
  qDebug() << char1;
  if (strcmp(char1, "FirstSecond") == 0)
    qDebug() << "Test passed";
}
