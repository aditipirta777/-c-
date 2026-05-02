#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {5, 2, 8, 1, 9};
    
    auto maxVal = *max_element(v.begin(), v.end());
    auto minVal = *min_element(v.begin(), v.end());
    
    cout << "Max: " << maxVal << endl;
    cout << "Min: " << minVal << endl;
    
    return 0;
}
/* Output:
Max: 9
Min: 1
*/
