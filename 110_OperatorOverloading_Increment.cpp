#include <iostream>
using namespace std;

class Number {
private:
    int value;
    
public:
    Number(int v = 0) : value(v) {}
    
    Number& operator++() {
        ++value;
        return *this;
    }
    
    Number operator++(int) {
        Number temp = *this;
        value++;
        return temp;
    }
    
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number n(5);
    ++n;
    n.display();
    
    n++;
    n.display();
    
    return 0;
}
/* Output:
Value: 6
Value: 7
*/
