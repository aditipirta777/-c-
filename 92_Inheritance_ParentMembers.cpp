#include <iostream>
using namespace std;

class Vehicle {
public:
    string brand;
    
    void start() {
        cout << "Vehicle started" << endl;
    }
};

class Car : public Vehicle {
public:
    int doors;
    
    void openDoor() {
        cout << "Car door opened" << endl;
    }
};

int main() {
    Car car;
    car.brand = "Toyota";
    car.doors = 4;
    
    car.start();
    car.openDoor();
    
    return 0;
}
/* Output:
Vehicle started
Car door opened
*/
