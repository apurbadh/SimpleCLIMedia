#include "Users.h"
#include <iostream>
using namespace std;

Users::Users(){
}

Users::Users(string n, string u, string p)
{
    name = n;
    username = u;
    password = p;
}


void Users::showdata(){
    cout<<"Name : "<<name<<endl;
    cout<<"Username : "<<username<<endl;
}

void Users::setData(string n, string u, string p){
    name = n;
    username = u;
    password = p;
}

string Users::getName(){
    return name;
}

string Users::getUsername(){
    return username;
}

string Users::getPasswd(){
    return password;
}
