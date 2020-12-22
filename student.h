
#pragma once
#include<iostream>
using namespace std;
class student {                  //class 'student' publically derived from 'library'
protected:
    int sid[10];
    string name[10];
    int no_issueBooks[10];
    string degreeName[10];
    int semester[10];
    int size;
public:
    void add();
    void displayStudent();
    void update2();
    void search1();
    void del1();
  

};

