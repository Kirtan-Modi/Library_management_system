#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class Library {
public:
    int book_id;
    int price;
    int pages;
    char book_name[100];
    char author[100];
};

int main() {
    Library lib[20];
    int input = 0;
    int count = 0;

    while (input != 3) {
        cout << "\nMenu: "<<endl;
        cout << "1. Add New Book"<<endl;
        cout << "2. Display All Books"<<endl;
        cout << "3. Quit\n" << endl;
        cout << "Enter Your Choice: ";
        cin >> input;

        switch (input) {
        case 1:
            start:
            cout << "Enter Book ID: ";
            //cin>>lib[count].book_id;
            cin >> lib[count].book_id;
            cin.ignore();
            
            cout << "Enter Book Name: ";
            //cin>>lib[count].book_name;
            cin.getline(lib[count].book_name, 100);
            
            cout << "Enter Book Author: ";
            //cin>>lib[count].author;
            cin.getline(lib[count].author, 100);
            
            cout << "Enter Price: ";
            //cin>>lib[count].price;
            cin >> lib[count].price;
            
            cout << "Enter Number of pages: ";
            //cin>>lib[count].pages;
            cin >> lib[count].pages;
            cout << "Book Added Successfully!\n";
            count++;
            break;

        case 2:
            for (int i = 0; i < count; i++) {
                cout << "-----------------------------\n";
                cout << "Book ID   : " << lib[i].book_id << endl;
                cout << "Book Name : " << lib[i].book_name << endl;
                cout << "Author    : " << lib[i].author << endl;
                cout << "Price     : " << lib[i].price <<"₹"<< endl;
                cout << "Pages     : " << lib[i].pages << endl;
            }
            break;

        case 3:
            exit(0);
            break;

        default:
            cout << "You have entered wrong value. Try again" << endl;
            goto start;
        }
    }

    return 0;
}