#include <iostream>
using namespace std;

class Complex {
private:
    double real, imag;
    
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}
    
    Complex operator+(const Complex &c) {
        return Complex(real + c.real, imag + c.imag);
    }
    
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(1, 2);
    Complex c3 = c1 + c2;
    
    c3.display();
    
    return 0;
}
/* Output:
4 + 6i
*/
