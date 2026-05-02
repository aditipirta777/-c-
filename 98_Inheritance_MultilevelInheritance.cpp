#include <iostream>
using namespace std;

class GrandParent {
public:
    void walk() {
        cout << "Grandparent is walking" << endl;
    }
};

class Parent : public GrandParent {
public:
    void run() {
        cout << "Parent is running" << endl;
    }
};

class Child : public Parent {
public:
    void play() {
        cout << "Child is playing" << endl;
    }
};

int main() {
    Child c;
    c.walk();
    c.run();
    c.play();
    
    return 0;
}
/* Output:
Grandparent is walking
Parent is running
Child is playing
*/
