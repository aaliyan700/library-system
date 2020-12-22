
#include<iostream>
#include"book.h"
#include<string>
#include "book.h"
using namespace std;
void book::createBook()
{
    cout << "\n\n\n\t\tBOOK DETAILS\n\n\n\n\n";
    cout << "How many Time you wants to Enter a Book:" << endl;
    cin >> size;
    for (int j = 0; j < size; j++)
    {
        cout << "Enter book ID : ";
        cin >> id[j];
        cout << "Enter book Name : ";
        cin.ignore();
        getline(cin, name[j]);
        cout << "Enter book Author Name : ";
        cin.ignore();
        getline(cin, author[j]);
        cout << "Enter book pages : ";
        cin >> pages[j];
    }
    cout << "\n\nRECORD ADDED SUCCESSFULLY !";

}
void book::displayBook()
{
    cout << "\n\n\n\t\t Display Books\n\n\n\n\n";

    for (int j = 0; j < size; j++)
    {
        if (id[j] > 0)
        {
            cout << "BOOK ID : " << id[j] << endl;
            cout << "BOOK NAME : " << name[j] << endl;
            cout << "BOOK PAGES : " << pages[j] << endl;
            cout << "BOOK AUTHOR : " << author[j] << endl;
        }
    }
}
void book::update() {
    int a;
    cout << "\n\n\n\t\tBOOK DETAILS\n\n\n\n\n";
    cout << "Enter book ID to update record : ";
    cin >> a;
    for (int j = 0; j < size; j++)
    {
        if (a == id[j]) {
            cout << "Enter new book ID : ";
            cin >> id[j];
            cout << "Enter book Name : ";
            cin.ignore();
            getline(cin, name[j]);
            cout << "Enter book pages : ";
            cin >> pages[j];
            cout << "\n\nRECORD UPDATED SUCCESSFULLY !";
        }
        else {
            cout << "\n\n\t\tRECORD NOT FOUND !";
        }
    }

}
void book::search() {
    int b;
    cout << "\n\n\n\tEnter a Book you wants to search\n";
    cin >> b;
    for (int j = 0; j < size; j++)
    {
        if (b == id[j])
            cout << "\n\n\n\tBook has been Found\n";
    }
}
void book::del()
{
    int c, f = 0, p;
    cout << "\n\n\n\n\tEnter a Book Id you wants to Delete\n";
    cin >> c;
    for (int j = 0; j < size; j++)
    {
        if (c == id[j])
        {
           id[j]=-1;
            cout << "\n\n\n\tRecord Deleted Successfully\n";
        }
   
    }
}
//void book::   issue_book();
//void book:: return_book();
