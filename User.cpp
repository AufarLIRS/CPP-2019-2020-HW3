#include "User.h"

User::User(int age, QString name)
{
  this->age_ = age;
  this->name_ = name;
}
QString User::getName() const
{
  return name_;
}
int User::getAge() const
{
  return age_;
}
size_t User::getCount()
{
  return users_.size();
}
void User::addUser(User user)
{
  users_.push_back(user);
}
void User::removeUserAt(int index)
{
  users_.erase(users_.begin() + index);
}
void User::removeUserByName(QString name)
{
  for (unsigned long i = 0; i < users_.size(); i++)
  {
    if (users_[i].getName() == name)
      users_.erase(users_.begin() + i);
  }
}
std::vector<QString> User::getAllNames()
{
  std::vector<QString> list;
  std::for_each(users_.begin(), users_.end(), [&](User found) { list.push_back(found.getName()); });
  return list;
}
