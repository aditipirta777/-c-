#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {3, 1, 4, 1, 5, 9, 2, 6};
    
    sort(v.begin(), v.end());
    
    cout << "Sorted: ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}
/* Output:
Sorted: 1 1 2 3 4 5 6 9 
*/
