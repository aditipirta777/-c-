#include <iostream>
using namespace std;

class ThisPointer {
private:
    int value;
    
public:
    ThisPointer(int v) : value(v) {}
    
    ThisPointer& setValue(int v) {
        this->value = v;
        return *this;
    }
    
    void display() {
        cout << "Value: " << this->value << endl;
    }
};

int main() {
    ThisPointer tp(10);
    tp.setValue(20).display();
    
    return 0;
}
/* Output:
Value: 20
*/
