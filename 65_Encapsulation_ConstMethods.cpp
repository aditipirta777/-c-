#include <iostream>
using namespace std;

class Circle {
private:
    double radius;
    const double PI = 3.14159;
    
public:
    Circle(double r) : radius(r) {}
    
    double getRadius() const {
        return radius;
    }
    
    void setRadius(double r) {
        if (r > 0) {
            radius = r;
        }
    }
    
    double getArea() const {
        return PI * radius * radius;
    }
};

int main() {
    Circle c(5);
    cout << "Radius: " << c.getRadius() << endl;
    cout << "Area: " << c.getArea() << endl;
    
    return 0;
}
/* Output:
Radius: 5
Area: 78.5398
*/
