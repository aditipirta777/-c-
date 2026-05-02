#include <iostream>
using namespace std;

class Vehicle {
private:
    string registrationNumber;
    string owner;
    int yearOfManufacture;
    
public:
    Vehicle(string regNo, string o, int year) 
        : registrationNumber(regNo), owner(o), yearOfManufacture(year) {}
    
    bool isOld() {
        return (2024 - yearOfManufacture) > 10;
    }
    
    void displayInfo() {
        cout << "Owner: " << owner << ", Year: " << yearOfManufacture << endl;
    }
};

int main() {
    Vehicle v("ABC123", "John", 2010);
    v.displayInfo();
    cout << "Is Old: " << v.isOld() << endl;
    
    return 0;
}
/* Output:
Owner: John, Year: 2010
Is Old: 1
*/
