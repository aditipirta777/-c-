#include <iostream>
#include <functional>
using namespace std;

int main() {
    auto add = [](int a, int b) { return a + b; };
    auto multiply = [](int a, int b) { return a * b; };
    
    cout << "Add 5 + 3: " << add(5, 3) << endl;
    cout << "Multiply 5 * 3: " << multiply(5, 3) << endl;
    
    return 0;
}
/* Output:
Add 5 + 3: 8
Multiply 5 * 3: 15
*/
