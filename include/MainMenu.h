#ifndef MAINMENU_H
#define MAINMENU_H
#include <vector>
#include <Users.h>

using namespace std;

void showLoginMenu();
bool checkData(vector<Users> users, string usrnm, string passwd);
bool checkUser(vector<Users> users, string usernm);

string loginUser(vector<Users> userList, bool *isLogged);
void registerUser(vector<Users> &userList);



#endif // MAINMENU_H
