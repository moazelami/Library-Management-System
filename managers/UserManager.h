#pragma once
#include "../models/User.h"
#include <vector>
#include <iostream>
using namespace std;

class UserManager
{
    private:
        vector<User> users;
    public:
        void AddUser(const User & user) 
        {
            users.push_back(user);
        }


        void DisplayUsers()
        {
            if(users.empty())
            {
                cout << "No users found." << endl;
                return;
            }
            for(const User& user : users)
            {
                cout << "------------------------" << endl;
                user.DisplayUser();
                cout << "------------------------" << endl;
            }
        }

};