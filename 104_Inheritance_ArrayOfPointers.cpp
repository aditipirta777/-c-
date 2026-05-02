#include <iostream>
using namespace std;

class Shape {
public:
    virtual void display() {
        cout << "I am a shape" << endl;
    }
    
    virtual ~Shape() {}
};

class Circle : public Shape {
public:
    void display() override {
        cout << "I am a circle" << endl;
    }
};

class Square : public Shape {
public:
    void display() override {
        cout << "I am a square" << endl;
    }
};

int main() {
    Shape *shapes[2];
    shapes[0] = new Circle();
    shapes[1] = new Square();
    
    shapes[0]->display();
    shapes[1]->display();
    
    delete shapes[0];
    delete shapes[1];
    
    return 0;
}
/* Output:
I am a circle
I am a square
*/
