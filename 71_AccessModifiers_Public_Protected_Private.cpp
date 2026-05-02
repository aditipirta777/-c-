#include <iostream>
using namespace std;

class InheritanceExample {
public:
    void publicMethod() {
        cout << "Public method called" << endl;
    }
    
protected:
    void protectedMethod() {
        cout << "Protected method called" << endl;
    }
    
private:
    void privateMethod() {
        cout << "Private method called" << endl;
    }
};

int main() {
    InheritanceExample obj;
    obj.publicMethod();
    
    return 0;
}
/* Output:
Public method called
*/
