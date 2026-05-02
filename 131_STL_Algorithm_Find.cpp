#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    int search_val = 3;
    
    auto result = find(v.begin(), v.end(), search_val);
    
    if (result != v.end()) {
        cout << "Element found at position: " << (result - v.begin()) << endl;
    } else {
        cout << "Element not found" << endl;
    }
    
    return 0;
}
/* Output:
Element found at position: 2
*/
