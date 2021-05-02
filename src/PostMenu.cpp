#include "PostMenu.h"
#include <iostream>
#include <vector>
#include <Post.h>
#include <Users.h>

using namespace std;

void showPostOpt(){
    cout << "1. See next post" << endl;
    cout << "2. Create a post" << endl;
    cout << "3. Logout" << endl;
    cout << ">> ";
}

void showOnePost(vector<Post> &posts)
{
    if (posts.size() == 0){
        cout << "No Posts found" << endl;
        return;
    }
    int counter = 0;
    int choice;
    string comment;
    do {
        if (counter == posts.size()){
            cout << "Posts have ended" << endl;;
            return;
        }
        posts.at(counter).showPost();
        cout << "\n\t1. Like the post" <<endl;
        cout << "\t2. Comment on the post" <<endl;
        cout << "\t3. Next Post" << endl;
        cout << "\t4. Back" << endl;
        cout << ">> ";
        cin >> choice;
        switch (choice){
        case 1:
            posts.at(counter).incrementLikes();
            break;
        case 2:
            cin.ignore();
            cout << "Write comment : " << endl;
            getline(cin, comment);
            posts.at(counter).addComment(comment);
            break;
        case 3:
            counter++;
            break;
        case 4:
            break;
        default:
            cout << "Invalid choice !"<< endl;
            break;


        }
        system("clear");
    }while(choice != 4);
}

void createPost(vector<Post> &post, string u){
    Post p;
    p.setUser(u);
    p.setData();
    post.push_back(p);
}



