#pragma once
#include <iostream>
#include <string>

using namespace std;

class Book
{

private:
    int id;
    double price;
    string title;
    string author;
    bool available;
    int copies;

public:
    Book()
    {

        id = 0;
        title = "";
        author = "";
        available = false;
        price = 0;
        copies = 0;
    }
    Book(int id, const string &title, const string &author, bool available, double price, int copies)
    {
        id = id;
        SetPrice(price);
        this -> title = title;
        this-> author = author;
        this-> available = available;
        this-> copies = copies;
    }

    void SetId(int id) { this -> id = id; }
    void SetPrice(double price)
    { 
        if(price >= 0)
            this -> price = price; 
    }
    void SetTitle(const string& title) { this -> title = title; }
    void SetAuthor(const string& author) { this -> author = author; }
    void IsAvailable(bool available) { this -> available = available; }
    void SetCopies(int copies) { this -> copies = copies; }

    int GetId() const { return id; }
    float GetPrice() const { return price; }
    string GetTitle() const { return title; }
    string GetAuthor() const { return author; }
    bool GetAvailable() const { return available; }
    int GetCopies() const { return copies; }

    void DisplayBook()
    {

        cout << "ID        :" << GetId() << endl;
        cout << "TITLE     :" << GetTitle() << endl;
        cout << "AUTHOR    :" << GetAuthor() << endl;
        cout << "PRICE     :" << GetPrice() << endl;
        cout << "COPIES    :" << GetCopies() << endl;
    }
};