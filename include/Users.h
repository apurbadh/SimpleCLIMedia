#ifndef USERS_H
#define USERS_H
#include <iostream>

using namespace std;

class Users
{
    public:
        Users();
        Users(string name, string username, string password);
        void showdata();
        void setData(string n, string u, string p);
        string getName();
        string getUsername();
        string getPasswd();
    protected:

    private:
        string name;
        string username;
        string password;

};

#endif // USERS_H
