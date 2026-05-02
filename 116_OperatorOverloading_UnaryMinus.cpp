#include <iostream>
using namespace std;

class Point {
private:
    double x, y;
    
public:
    Point(double a = 0, double b = 0) : x(a), y(b) {}
    
    Point operator-() {
        return Point(-x, -y);
    }
    
    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p(3, 4);
    Point p2 = -p;
    
    p2.display();
    
    return 0;
}
/* Output:
(-3, -4)
*/
