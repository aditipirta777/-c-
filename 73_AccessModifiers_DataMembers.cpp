#include <iostream>
using namespace std;

class Base {
private:
    int privateData;
    
protected:
    int protectedData;
    
public:
    int publicData;
    
    void display() {
        cout << "Private: " << privateData << ", Protected: " << protectedData << ", Public: " << publicData << endl;
    }
};

int main() {
    Base b;
    b.publicData = 10;
    
    return 0;
}
/* Output:
(No output in main)
*/
