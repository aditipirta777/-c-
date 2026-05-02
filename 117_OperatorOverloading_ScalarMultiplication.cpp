#include <iostream>
using namespace std;

class Percentage {
private:
    double value;
    
public:
    Percentage(double v = 0) : value(v) {}
    
    Percentage operator*(int factor) {
        return Percentage(value * factor);
    }
    
    void display() {
        cout << "Value: " << value << "%" << endl;
    }
};

int main() {
    Percentage p(10);
    Percentage p2 = p * 5;
    
    p2.display();
    
    return 0;
}
/* Output:
Value: 50%
*/
