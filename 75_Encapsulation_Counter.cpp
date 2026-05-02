#include <iostream>
using namespace std;

class Counter {
private:
    int count;
    
public:
    Counter() : count(0) {}
    
    void increment() {
        count++;
    }
    
    void decrement() {
        if (count > 0) count--;
    }
    
    int getCount() const {
        return count;
    }
};

int main() {
    Counter c;
    c.increment();
    c.increment();
    c.decrement();
    
    cout << "Count: " << c.getCount() << endl;
    
    return 0;
}
/* Output:
Count: 1
*/
