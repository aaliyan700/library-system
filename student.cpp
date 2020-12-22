#include<iostream>
#include<string>
#include"student.h"
using namespace std;
void student::add()
{
    cout << "How many times you wants to enter student:";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Student ID:\n";
        cin >> sid[i];
        cout << "Enter Student Name:\n";
        cin.ignore();
        getline(cin, name[i]);
        cout << "Enter Number of Book issued by Student:\n";
        cin >> no_issueBooks[i];
        cout << "Enter Your Degree Program:" << endl;
        cin.ignore();
        getline(cin, degreeName[i]);
        cout << "Enter Your Semester:" << endl;
        cin >> semester[i];
        cout << "Record Added Successfully\n";
    }

}
void student::displayStudent()
{
    for (int i = 0; i < size; i++)
    {
        if (sid[i] > 0)
        {
            cout << "ID:" << sid[i]<<endl;
            cout << "Name:" << name[i]<<endl;
            cout << "Number of Issued Books" << no_issueBooks[i]<<endl;
            cout << "Degree Name:" << degreeName[i]<<endl;
            cout << "Semester:" << semester[i]<<endl;
        }
    }
}
void student::update2()
{
    int d;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Student ID you  wants to update:" << endl;
        cin >> d;
        if (d == sid[i])
        {
            cout << "Enter Student ID:\n";
            cin >> sid[i];
            cout << "Enter Student Name:\n";
            cin.ignore();
            getline(cin, name[i]);
            cout << "Enter Number of Book issued by Student:\n";
            cin >> no_issueBooks[i];
            cout << "Enter Your Degree Program:" << endl;
            cin.ignore();
            getline(cin, degreeName[i]);
            cout << "Enter Your Semester:" << endl;
            cin >> semester[i];
            cout << "Record Updated Successfully:" << endl;
        }
        else
        {
            cout << "Record Not Found:" << endl;
        }
    }
}
void student::search1()
{
    int s;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Student ID wants to search:" << endl;
        cin >> s;
        if (s == sid[i])
        {
            cout << "Record Found Successfully" << endl;
        }
        else
        {
            cout << "Record not Found Successfully:" << endl;
        }
    }
}
void student::del1()
{
    int f, g = 0, i;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Student ID wants to Delete:" << endl;
        cin >> f;
        if (f == sid[i])
        {
            sid[i]=-1;
            cout << "Record Deleted Successfully:" << endl;
        }
    }
}

