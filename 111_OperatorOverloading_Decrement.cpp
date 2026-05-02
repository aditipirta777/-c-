#include <iostream>
using namespace std;

class Number {
private:
    int value;
    
public:
    Number(int v = 0) : value(v) {}
    
    Number& operator--() {
        --value;
        return *this;
    }
    
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number n(10);
    --n;
    n.display();
    
    return 0;
}
/* Output:
Value: 9
*/
