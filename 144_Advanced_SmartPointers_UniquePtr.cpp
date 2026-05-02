#include <iostream>
#include <memory>
using namespace std;

class Resource {
public:
    Resource() {
        cout << "Resource allocated" << endl;
    }
    
    ~Resource() {
        cout << "Resource deallocated" << endl;
    }
};

int main() {
    {
        unique_ptr<Resource> ptr(new Resource());
        cout << "Using resource" << endl;
    }
    cout << "Resource cleaned up automatically" << endl;
    
    return 0;
}
/* Output:
Resource allocated
Using resource
Resource deallocated
Resource cleaned up automatically
*/
