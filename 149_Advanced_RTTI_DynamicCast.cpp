#include <iostream>
#include <typeinfo>
using namespace std;

class Base {
public:
    virtual ~Base() {}
};

class Derived : public Base {};

int main() {
    Base *ptr = new Derived();
    
    if (typeid(*ptr) == typeid(Derived)) {
        cout << "Pointer points to Derived" << endl;
    }
    
    Derived *derivedPtr = dynamic_cast<Derived*>(ptr);
    if (derivedPtr != nullptr) {
        cout << "Cast successful" << endl;
    }
    
    delete ptr;
    
    return 0;
}
/* Output:
Pointer points to Derived
Cast successful
*/
