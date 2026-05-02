#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base class" << endl;
    }
    
    virtual ~Base() {}
};

class Derived : public Base {
public:
    void display() override {
        cout << "Derived class" << endl;
    }
};

int main() {
    Base *ptr;
    Derived d;
    ptr = &d;
    
    ptr->display();
    
    return 0;
}
/* Output:
Derived class
*/
