#include <iostream>
using namespace std;

class Temperature {
private:
    double celsius;
    
    bool isValidTemperature(double temp) {
        return temp >= -273.15;
    }
    
public:
    Temperature(double c) {
        if (isValidTemperature(c)) {
            celsius = c;
        } else {
            celsius = 0;
        }
    }
    
    double getFahrenheit() const {
        return (celsius * 9.0/5.0) + 32;
    }
    
    void display() {
        cout << celsius << "C = " << getFahrenheit() << "F" << endl;
    }
};

int main() {
    Temperature t(25);
    t.display();
    
    return 0;
}
/* Output:
25C = 77F
*/
