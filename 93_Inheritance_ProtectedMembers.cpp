#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
    
public:
    Person(string n, int a) : name(n), age(a) {}
    
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int rollNo;
    
public:
    Student(string n, int a, int r) : Person(n, a), rollNo(r) {}
    
    void studentInfo() {
        display();
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    Student s("Alice", 20, 101);
    s.studentInfo();
    
    return 0;
}
/* Output:
Name: Alice, Age: 20
Roll No: 101
*/
