#include<iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class function\n";
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class function\n";
    }
};

int main() {
    Base* ptr;
    Derived obj;

    ptr = &obj;
    ptr->show();  // calls Derived class function

    return 0;
}