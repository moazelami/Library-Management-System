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
    Book(int i, float p, string t, string a, bool av, int c)
    {
        i = id;
        p = price;
        t = title;
        a = author;
        av = available;
        c = copies;
    }

    void SetId(int i) { i = id; }
    void SetPrice(float p) { p = price; }
    void SetTitle(string t) { t = title; }
    void SetAuthor(string a) { a = author; }
    void SetAvailable(bool av) { av = available; }
    void SetCopies(int c) { c = copies; }

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