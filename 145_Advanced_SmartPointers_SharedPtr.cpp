#include <iostream>
#include <memory>
using namespace std;

class Node {
public:
    int data;
    shared_ptr<Node> next;
    
    Node(int d) : data(d), next(nullptr) {
        cout << "Node " << d << " created" << endl;
    }
    
    ~Node() {
        cout << "Node " << data << " deleted" << endl;
    }
};

int main() {
    {
        shared_ptr<Node> head = make_shared<Node>(1);
        head->next = make_shared<Node>(2);
        cout << "Reference count: " << head.use_count() << endl;
    }
    cout << "Nodes cleaned up" << endl;
    
    return 0;
}
/* Output:
Node 1 created
Node 2 created
Reference count: 1
Nodes cleaned up
Node 2 deleted
Node 1 deleted
*/
