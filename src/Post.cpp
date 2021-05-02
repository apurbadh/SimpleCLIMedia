#include "Post.h"
#include <iostream>
#include <vector>
#include <Users.h>

using namespace std;
Post::Post()
{
    likes = 0;
}

void Post::incrementLikes(){
    likes++;
}

void Post::setData(){
    cin.ignore();
    cout << "Enter the topic : ";
    getline(cin, topic);
    cin.ignore();
    cout << "Enter the description : ";
    getline(cin, description);
}

void Post::showPost(){
    cout << "Topic : " << topic << endl;
    cout << "Posted By : " << user << endl;
    cout << "Description : " << description << endl;
    cout << "Likes : " << likes << endl;
    cout << "Comments : " << endl;
    for (int i = 0; i < comments.size(); i++){
        cout << "" << i + 1<< ". " << comments.at(i)<< endl;
    }
}

void Post::addComment(string comment){
    comments.push_back(comment);
}

void Post::setUser(string u){
    user = u;
}

