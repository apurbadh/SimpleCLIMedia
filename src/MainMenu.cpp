#include "MainMenu.h"
#include <iostream>
#include <Users.h>
#include <vector>

using namespace std;

void showLoginMenu(){
    cout<<"1. Login"<<endl;
    cout<<"2. Register"<<endl;
    cout<<"3. Exit"<<endl;
    cout<<">> ";
}

bool checkData(vector<Users> users, string usrnm, string passwd){
    for (int i = 0; i < users.size(); i++){
        if (users.at(i).getUsername().compare(usrnm) == 0&& users.at(i).getPasswd().compare(passwd) == 0){
            return true;
        }
    }
    return false;
}

bool checkUser(vector<Users> users, string usernm){
    for (int i = 0; i < users.size(); i++){
        if (users.at(i).getUsername().compare(usernm) == 0){
            return true;
        }
    }
    return false;
}

string loginUser(vector<Users> userList, bool *isLogged){
    string username, password;
    cout << "Enter the username : ";
    cin >> username;
    cout << "Enter the password : ";
    cin >> password;
    if (checkData(userList, username, password)){
        cout << "Sucessfully Logged in !" << endl;
        *isLogged = true;
        return username;
    }else{
        cout << "Incorrect Credential !"<<endl;
        return "error";
    }
}

void registerUser(vector<Users> &userList){
    Users user;
    string username, name, password;
    cout<<"Enter your username : ";
    cin >> username;
    cout<<"Enter your name : ";
    cin >> name;
    cout << "Enter your password : ";
    cin >> password;
    if (!checkUser(userList, username)){
        user.setData(name, username, password);
        userList.push_back(user);
        cout<<"Sucessfully Registered !"<<endl;
                return;
    }else{
        cout << "The user already exists !" <<endl;
    }
}

