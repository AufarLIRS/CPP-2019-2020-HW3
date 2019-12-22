#ifndef USER_H
#define USER_H

#include <QString>

class User
{
    int age_;
    QString name_;

public:
    // static нельзя использовать совместно с const
    static std::vector<User> users_;
    User(int, QString);
    QString getName() const;
    int getAge() const;
    static size_t getCount();
    static void addUser(User);
    static void removeUserAt(int);
    static void removeUserByName(QString);
    static std::vector<QString> getAllNames();
    static void strcat(char*, const char*);
    static char*  resize(char*, unsigned, unsigned);
};

#endif // USER_H


