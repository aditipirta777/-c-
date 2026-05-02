#include <iostream>
using namespace std;

class Vehicle {
protected:
    string color;
    
public:
    Vehicle(string c) : color(c) {}
    
    virtual void displayInfo() {
        cout << "Color: " << color << endl;
    }
};

class Bike : public Vehicle {
private:
    int gears;
    
public:
    Bike(string c, int g) : Vehicle(c), gears(g) {}
    
    void displayInfo() override {
        Vehicle::displayInfo();
        cout << "Gears: " << gears << endl;
    }
};

int main() {
    Bike bike("Red", 6);
    bike.displayInfo();
    
    return 0;
}
/* Output:
Color: Red
Gears: 6
*/
