#pragma once
#include <iostream>
#include <string>

using namespace std;

class Book
{

private:
    int id;
    float price;
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
        copies = 0;
    }
    Book(int Id, float Price, string Title, string Author, bool Available, int Copies)
    {
        id = Id;
        price = Price;
        title = Title;
        author = Author;
        available = Available;
        copies = Copies;
    }

    void SetId(int Id) { id = Id; }
    void SetPrice(float Price) { price = Price; }
    void SetTitle(string Title) { title = Title; }
    void SetAuthor(string Author) { author = Author; }
    void SetAvailable(bool Available) { available = Available; }
    void SetCopies(int Copies) { copies = Copies; }

    int GetId() { return id; }
    float GetPrice() { return price; }
    string GetTitle() { return title; }
    string GetAuthor() { return author; }
    bool GetAvailable() { return available; }
    int GetCopies() { return copies; }

    void Display()
    {

        cout << "ID        :" << GetId() << endl;
        cout << "PRICE     :" << GetPrice() << endl;
        cout << "TITLE     :" << GetTitle() << endl;
        cout << "AUTHOR    :" << GetAuthor() << endl;
        cout << "AVAILABLE :" << GetAvailable() << endl;
        cout << "COPIES    :" << GetCopies() << endl;
    }
};