#include <iostream>
using namespace std;

class Shape {
public:
    virtual double getArea() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;
    
public:
    Circle(double r) : radius(r) {}
    
    double getArea() override {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Shape *s = new Circle(5);
    cout << "Area: " << s->getArea() << endl;
    delete s;
    
    return 0;
}
/* Output:
Area: 78.5398
*/
