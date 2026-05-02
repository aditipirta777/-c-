#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    
    cout << "Vector elements: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    
    cout << "Size: " << v.size() << endl;
    
    return 0;
}
/* Output:
Vector elements: 10 20 30 
Size: 3
*/
