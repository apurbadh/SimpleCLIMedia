#include <iostream>
#include <Users.h>
#include <MainMenu.h>
#include <Post.h>
#include <PostMenu.h>
#include <vector>

using namespace std;


int main()
{
    string u;
    int choice, pchoice;
    vector<Users> userList;
    vector<Post> posts;
    string name, username, password;
    bool isLogged = false;

    do {

        do
        {
            showLoginMenu();
            cin >> choice;

            switch(choice){
            case 1:
                u = loginUser(userList, &isLogged);
                break;
            case 2:
                registerUser(userList);
                break;
            case 3:
                break;
            default:
                cout << "Invalid choice !"<< endl;
                break;

        }
        }while(choice != 3 && !isLogged);

        do {
            showPostOpt();
            cin >> pchoice;
            switch (pchoice){
            case 1:
                showOnePost(posts);
                break;
            case 2:
                createPost(posts, u);
                break;
            case 3:
                isLogged = false;
                break;
            default:
                cout << "Invalid choice !" << endl;
                break;
            }


        }while(isLogged);
    }while(choice != 3);


    return 0;
}
