#include <iostream>
using namespace std;

template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max of 10 and 20: " << findMax(10, 20) << endl;
    cout << "Max of 5.5 and 3.2: " << findMax(5.5, 3.2) << endl;
    cout << "Max of 'a' and 'b': " << findMax('a', 'b') << endl;
    
    return 0;
}
/* Output:
Max of 10 and 20: 20
Max of 5.5 and 3.2: 5.5
Max of 'a' and 'b': b
*/
