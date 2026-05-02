#include <iostream>
using namespace std;

class A {
public:
    virtual void func() {
        cout << "Class A" << endl;
    }
};

class B : public A {
public:
    void func() override {
        cout << "Class B" << endl;
    }
};

class C : public B {
public:
    void func() override {
        cout << "Class C" << endl;
    }
};

int main() {
    A *ptr = new C();
    ptr->func();
    delete ptr;
    
    return 0;
}
/* Output:
Class C
*/
