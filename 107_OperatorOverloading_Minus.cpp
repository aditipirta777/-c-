#include <iostream>
using namespace std;

class Vector {
private:
    double x, y, z;
    
public:
    Vector(double a = 0, double b = 0, double c = 0) : x(a), y(b), z(c) {}
    
    Vector operator-(const Vector &v) {
        return Vector(x - v.x, y - v.y, z - v.z);
    }
    
    void display() {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }
};

int main() {
    Vector v1(5, 10, 15);
    Vector v2(1, 2, 3);
    Vector v3 = v1 - v2;
    
    v3.display();
    
    return 0;
}
/* Output:
(4, 8, 12)
*/
