#pragma once
#include <string>

using namespace std;

class User
{
    private:
        int id;
        int age;
        char gender;
        string firstName;
        string lastName;
        string password;
        bool isAdmin;
    public:
        User()
        {
            id = 0;
            age = 0;
            gender = '*';
            firstName = "UNKNOWN";
            lastName = "UNKNOWN";
            password = "UNKNOWN";
            isAdmin = false;
        }

        User(int id , int age , char gender, const string &fname , const string &lname ,const string &pwd , bool isAdmin)
        {
            this->id = id;
            SetGender(gender);
            SetAge(age);
            SetPassword(pwd);
            SetFirstName(fname);
            SetLastName(lname);
            this->isAdmin = isAdmin;
        }

        int GetId() const {return id;}
        int GetAge() const {return age;}
        char GetGender() const { return gender; }
        string GetFirstName() const { return firstName; }
        string GetLastName() const { return lastName; }
        bool CheckPassword(const string &password) const { return this->password == password; }
        bool IsAdmin() const { return isAdmin; }
        string GetFullName() const { return firstName +" "+ lastName; }

        void SetAge(int age)
        {
            if (age >= 0)
                this->age = age;
        }

        void SetGender(char gender)
        {
            if (gender == 'M' || gender == 'F')
                this->gender = gender;
        }

        void SetFirstName(const string &firstName)
        {
            this->firstName = firstName;
        }

        void SetLastName(const string &lastName)
        {
            this->lastName = lastName;
        }

        void SetPassword(const string &password)
        {
            if (password.length() >= 8)
                this->password = password;
        }

        void DisplayUser() const
        {
            cout << "ID       :" << GetId() << endl;
            cout << "Name     :" << GetFullName() << endl;
            cout << "Age      :" << GetAge() << endl;
            cout << "Gender   :" << GetGender() << endl;
            cout << "Is Admin :" << IsAdmin() << endl;
        }
};