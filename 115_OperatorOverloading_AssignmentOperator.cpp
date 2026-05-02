#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator, denominator;
    
public:
    Fraction(int n = 0, int d = 1) : numerator(n), denominator(d) {}
    
    Fraction& operator=(const Fraction &f) {
        numerator = f.numerator;
        denominator = f.denominator;
        return *this;
    }
    
    void display() {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() {
    Fraction f1(3, 4);
    Fraction f2;
    f2 = f1;
    
    f2.display();
    
    return 0;
}
/* Output:
3/4
*/
