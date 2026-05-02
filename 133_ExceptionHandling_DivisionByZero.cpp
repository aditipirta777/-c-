#include <iostream>
using namespace std;

int divide(int a, int b) {
    if (b == 0) {
        throw runtime_error("Division by zero!");
    }
    return a / b;
}

int main() {
    try {
        cout << "Result: " << divide(10, 2) << endl;
        cout << "Result: " << divide(10, 0) << endl;
    } catch (runtime_error &e) {
        cout << "Exception: " << e.what() << endl;
    }
    
    return 0;
}
/* Output:
Result: 5
Exception: Division by zero!
*/
