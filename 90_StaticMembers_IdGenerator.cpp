#include <iostream>
using namespace std;

class IdGenerator {
private:
    static int nextId;
    
public:
    static int generateId() {
        return ++nextId;
    }
    
    static int getLastId() {
        return nextId;
    }
};

int IdGenerator::nextId = 0;

int main() {
    cout << "ID1: " << IdGenerator::generateId() << endl;
    cout << "ID2: " << IdGenerator::generateId() << endl;
    cout << "ID3: " << IdGenerator::generateId() << endl;
    cout << "Last ID: " << IdGenerator::getLastId() << endl;
    
    return 0;
}
/* Output:
ID1: 1
ID2: 2
ID3: 3
Last ID: 3
*/
