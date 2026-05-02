#include <iostream>
using namespace std;

class Complex {
private:
    double real, imag;
    
    friend Complex operator+(const Complex &c1, const Complex &c2);
    
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}
    
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

Complex operator+(const Complex &c1, const Complex &c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

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
