#include<iostream>
#include<string>
#include<conio.h>
#include"student.h"
#include"book.h"
using namespace std;
void main() {
    book b;
    student s ;
    int choice;
    char ch;
    do {
        cout << "\n\n";
        cout << "\t\t    ---------------------------\n";
        cout << "\t\t    |LIBRARY MANAGEMENT SYSTEM|\n";
        cout << "\t\t    ---------------------------\n\n";
        cout << "\t\tWhat would you like to choose ?\n\n";
        cout << "\t\t1.CREATE BOOK RECORD\n";
        cout << "\t\t2.UPDATE BOOK RECORD\n";
        cout << "\t\t3.SEARCH BOOK RECORD\n";
        cout << "\t\t4.DELETE BOOK RECORD\n";
        cout << "\t\t5.ADD STUDENT RECORD\n";
        cout << "\t\t6.UPDATE STUDENT RECORD\n";
        cout << "\t\t7.SEARCH STUDENT RECORD\n";
        cout << "\t\t8.DELETE STUDENT RECORD\n";
        cout << "\t\t9.DISPLAY BOOK\n";
        cout << "\t\t10DISPLAY STUDENT\n";
        cout << "\t\t11EXIT\n\n";
        cout << "\t\tChoose Options:[1-13]";
        cin >> choice;
        system("cls");
        switch (choice) {
        case 1:
            b.createBook();
            break;
        case 2:
            b.update();
            break;
        case 3:
            b.search();
            break;
        case 4:
            b.del();
            break;
        case 5:
            s.add();
            break;
        case 6:
            s.update2();
            break;
        case 7:
            s.search1();
            break;
        case 8:
            s.del1();
            break;
        case 9:
            b.displayBook();
            break;
        case 10:
            s.displayStudent();
            break;
        default:
            cout << "\n\n\t\tInvalid choice !";
        }
        cout << "\n\nDo you want to continue ? (Y/N)";
        cin >> ch;
        system("cls");
    } while (ch == 'Y' || ch == 'y');
    cout << "\n\n\t\tGOOD BYE !";
}
