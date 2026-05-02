//ifstream fin;
//ofstream fout;
//fstream fio;
/*
file opeining 
 /          \
constructor   function

ifstream fin("test.txt",io::app)
ifstream fin("test.txt");
char ch;
cin>>ch;
fin>>ch; // read character from file 
STUDENT MANAGEMENT SYSTEM :
OPERATION PERFORM 
add student 
view student 
search 
update 
delete

*/
// STUDENT MANAGEMENT SYSTEM 

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Student {
public:
    int id;
    string name;
    float marks;

    void Input() {
        cout << "Enter student ID: ";
        cin >> id;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\nID: " << id;
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks << endl;
    }
};

void addStudent() {
    Student s;
    ofstream file("student.txt", ios::app);

    s.Input();
    file.write((char*)&s, sizeof(s));

    file.close();
    cout << "Student record added\n";
}

void viewStudent() {
    Student s;
    ifstream file("student.txt");

    while (file.read((char*)&s, sizeof(s))) {
        s.display();
    }

    file.close();
}

int main() {
    int ch;

    cout << "\nStudent Management System\n";
    cout << "1. Add Student\n";
    cout << "2. View Students\n";
    cout << "Enter choice: ";
    cin >> ch;

    switch (ch) {
        case 1:
            addStudent();
            break;
        case 2:
            viewStudent();
            break;
        default:
            cout << "Invalid choice";
    }

    return 0;
}