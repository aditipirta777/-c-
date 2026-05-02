#include <iostream>
using namespace std;

class Point {
private:
    double x, y;
    
public:
    Point(double a, double b) : x(a), y(b) {}
    
    void display() {
        cout << "(" << this->x << ", " << this->y << ")" << endl;
    }
    
    bool isOrigin() {
        return this->x == 0 && this->y == 0;
    }
};

int main() {
    Point p1(3, 4);
    Point p2(0, 0);
    
    p1.display();
    cout << "Is Origin: " << p2.isOrigin() << endl;
    
    return 0;
}
/* Output:
(3, 4)
Is Origin: 1
*/
