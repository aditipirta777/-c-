#include <iostream>
using namespace std;

class Test {
private:
    int value;
    
    friend void displayValue(Test &t);
    
public:
    Test(int v) : value(v) {}
};

void displayValue(Test &t) {
    cout << "Private Value: " << t.value << endl;
}

int main() {
    Test t(42);
    displayValue(t);
    
    return 0;
}
/* Output:
Private Value: 42
*/
