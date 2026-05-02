#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
    
    double add(double a, double b) {
        return a + b;
    }
    
    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculator calc;
    
    cout << "int add: " << calc.add(5, 3) << endl;
    cout << "double add: " << calc.add(5.5, 3.2) << endl;
    cout << "three int add: " << calc.add(5, 3, 2) << endl;
    
    return 0;
}
/* Output:
int add: 8
double add: 8.7
three int add: 10
*/
