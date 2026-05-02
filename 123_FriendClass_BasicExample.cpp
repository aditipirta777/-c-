#include <iostream>
using namespace std;

class A;

class B {
public:
    void display(A &a);
};

class A {
private:
    int value;
    
    friend class B;
    
public:
    A(int v) : value(v) {}
};

void B::display(A &a) {
    cout << "Value from A: " << a.value << endl;
}

int main() {
    A a(100);
    B b;
    b.display(a);
    
    return 0;
}
/* Output:
Value from A: 100
*/
