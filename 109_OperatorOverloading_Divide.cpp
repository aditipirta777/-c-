#include <iostream>
using namespace std;

class Number {
private:
    int value;
    
public:
    Number(int v = 0) : value(v) {}
    
    Number operator/(const Number &n) {
        return Number(value / n.value);
    }
    
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number n1(20);
    Number n2(4);
    Number n3 = n1 / n2;
    
    n3.display();
    
    return 0;
}
/* Output:
Value: 5
*/
