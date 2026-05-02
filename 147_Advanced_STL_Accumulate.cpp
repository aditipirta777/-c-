#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    
    int sum = accumulate(v.begin(), v.end(), 0);
    int product = accumulate(v.begin(), v.end(), 1, [](int a, int b) {
        return a * b;
    });
    
    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    
    return 0;
}
/* Output:
Sum: 15
Product: 120
*/
