#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_front(0);
    
    cout << "List elements: ";
    for (auto it : l) {
        cout << it << " ";
    }
    cout << endl;
    
    return 0;
}
/* Output:
List elements: 0 1 2 3 
*/
