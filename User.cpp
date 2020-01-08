#include "User.h"
#include <vector>

static std::vector<User> users_;
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
void User::removeUserByName(const QString  name)
{
    std::vector<User>::iterator i;
    for(i = users_.begin(); i != users_.end(); i++)
        if(i->getName() == name)
        {
            users_.erase(i);
            break;
        }
}
 std::vector<QString> User::getAllNames()
{
  std::vector<QString> names;
  std::vector<User>::iterator i;
  for(i = users_.begin(); i != users_.end(); i++)
      names.push_back(i->getName());
  return names;
}
