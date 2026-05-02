#include <iostream>
using namespace std;

class Data {
private:
    int value;
    static int count;
    
public:
    Data(int v) : value(v) {
        count++;
    }
    
    int getValue() const {
        return this->value;
    }
    
    static int getCount() {
        return count;
    }
};

int Data::count = 0;

int main() {
    Data d1(10);
    Data d2(20);
    Data d3(30);
    
    cout << "Count: " << Data::getCount() << endl;
    
    return 0;
}
/* Output:
Count: 3
*/
