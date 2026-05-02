#include <iostream>
using namespace std;

class Distance {
private:
    int feet, inches;
    
public:
    Distance(int f = 0, int i = 0) : feet(f), inches(i) {}
    
    bool operator==(const Distance &d) {
        return (feet == d.feet && inches == d.inches);
    }
    
    bool operator<(const Distance &d) {
        return (feet * 12 + inches) < (d.feet * 12 + d.inches);
    }
};

int main() {
    Distance d1(5, 6);
    Distance d2(5, 6);
    Distance d3(6, 0);
    
    cout << "d1 == d2: " << (d1 == d2) << endl;
    cout << "d1 < d3: " << (d1 < d3) << endl;
    
    return 0;
}
/* Output:
d1 == d2: 1
d1 < d3: 1
*/
