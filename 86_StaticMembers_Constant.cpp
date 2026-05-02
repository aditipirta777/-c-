#include <iostream>
using namespace std;

class Math {
public:
    static double PI;
    
    static double circleArea(double radius) {
        return PI * radius * radius;
    }
};

double Math::PI = 3.14159;

int main() {
    cout << "PI: " << Math::PI << endl;
    cout << "Area: " << Math::circleArea(5) << endl;
    
    return 0;
}
/* Output:
PI: 3.14159
Area: 78.5398
*/
