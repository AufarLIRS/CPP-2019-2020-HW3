#include "user.h"

User::User(int age, QString name)
{
    this->age_=age;
    this->name_=name;
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
    users_.erase(std::remove_if(users_.begin(), users_.end(),[&](User found){return found.getName() == name;}), users_.end());
}

std::vector<QString> User::getAllNames()
{
    std::vector<QString> list;
    std::for_each(users_.begin(),users_.end(),[&](User found){list.push_back(found.getName());});
    return  list;
}

void User::strcat(char* to, const char* from)
{
    memcpy(to + strlen(to), from, strlen(from) + 1);   // + 1 для нуля
}

char* User::resize(char* str, unsigned size, unsigned new_size)
{
    if (new_size < size) return nullptr;

    char *tmp = new char[new_size];      // Выделяем память для новой строки
    memcpy(tmp, str, size);              // Копируем старую строку в новую
    delete[] str;                        // Удаляем память со старыми данными
    return tmp;                          // Возвращаем новую строку со скопированными данными
}
