#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;
    
    double validateDimension(double d) {
        return (d > 0) ? d : 1;
    }
    
public:
    Rectangle() : length(1), width(1) {}
    
    Rectangle(double l, double w) : length(validateDimension(l)), width(validateDimension(w)) {}
    
    double getArea() {
        return length * width;
    }
    
    double getPerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle r(5, 3);
    cout << "Area: " << r.getArea() << endl;
    cout << "Perimeter: " << r.getPerimeter() << endl;
    
    return 0;
}
/* Output:
Area: 15
Perimeter: 16
*/
