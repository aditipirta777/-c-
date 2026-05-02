#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> m;
    m["Alice"] = 85;
    m["Bob"] = 90;
    m["Charlie"] = 78;
    
    for (auto &pair : m) {
        cout << pair.first << ": " << pair.second << endl;
    }
    
    return 0;
}
/* Output:
Alice: 85
Bob: 90
Charlie: 78
*/
