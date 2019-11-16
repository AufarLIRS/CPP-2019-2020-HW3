#ifndef USER_H
#define USER_H

#include <QDebug>
#include <vector>

class User
{
  int age_;
  QString name_;
  static std::vector<User> users_;

public:
  User(int age, QString name);
  QString getName() const;
  int getAge() const;
  static size_t getCount();
  static void addUser(User user);
  static void removeUserAt(int index);
  static void removeUserByName(QString name);
  static std::vector<QString> getAllNames();
};

#endif // USER_H
