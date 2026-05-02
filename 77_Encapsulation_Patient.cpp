#include <iostream>
using namespace std;

class Patient {
private:
    int patientId;
    string name;
    double height;
    double weight;
    
public:
    Patient(int id, string n, double h, double w) 
        : patientId(id), name(n), height(h), weight(w) {}
    
    double calculateBMI() {
        return (weight / (height * height));
    }
    
    void displayInfo() {
        cout << "Patient: " << name << ", BMI: " << calculateBMI() << endl;
    }
};

int main() {
    Patient p(1, "John", 1.75, 70);
    p.displayInfo();
    
    return 0;
}
/* Output:
Patient: John, BMI: 22.8571
*/
