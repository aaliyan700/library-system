#pragma once
#include<iostream>
using namespace std;
class book
{
protected:
    int id[10];
    string name[10];
    int pages[10];
    string author[10];
    int size;
public:
    void createBook();
    void update();
    void search();
    void del();
    void displayBook();
    /*void issue_book();
    void return_book();*/

};

