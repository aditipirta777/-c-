#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base class display" << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        Base::display();
        cout << "Derived class display" << endl;
    }
};

int main() {
    Derived d;
    d.display();
    
    return 0;
}
/* Output:
Base class display
Derived class display
*/
