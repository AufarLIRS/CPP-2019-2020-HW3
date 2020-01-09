#include "mainwindow.h"
#include <concat.h>
#include <QApplication>
#include <iostream>

using namespace std;
int main(int argc, char* argv[])
{ /*
   QApplication a(argc, argv);
   MainWindow w;
   w.show();
   return a.exec();*/
  char a1[] = { 'a', 0 };
  char b1[] = { 'b', 0 };
  char* a = strcat(a1, b1);
  std::cout << a << std::endl;

  std::cout << 1 << std::endl;
}
