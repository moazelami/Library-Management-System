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
    Book(int id, float price, string title, string author, bool available, int copies)
    {
        id = id;
        price = price;
        title = title;
        author = author;
        available = available;
        copies = copies;
    }

    void SetId(int id) { id = id; }
    void SetPrice(float price) { price = price; }
    void SetTitle(string title) { title = title; }
    void SetAuthor(string author) { author = author; }
    void SetAvailable(bool available) { available = available; }
    void SetCopies(int copies) { copies = copies; }

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