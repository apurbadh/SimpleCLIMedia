#ifndef POST_H
#define POST_H
#include <iostream>
#include <vector>
#include <Users.h>

using namespace std;

class Post
{
    public:
        Post();
        void setData();
        void incrementLikes();
        void showPost();
        void addComment(string comment);
        void setUser(string u);


    protected:

    private:
        string user;
        int likes;
        string topic;
        string description;
        vector<string> comments;
};

#endif // POST_H
