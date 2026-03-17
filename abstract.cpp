#include<iostream>
using namespace std;

class Shape {
public:
    // pure virtual function
    virtual void draw() = 0;
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    // Shape s; ❌ ERROR (object nahi banega)

    Circle c;
    c.draw(); // ✅

    return 0;
}