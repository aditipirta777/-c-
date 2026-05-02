#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    double salary;
    
public:
    Employee(string n, double s) : name(n), salary(s) {}
    
    virtual double calculateBonus() {
        return salary * 0.05;
    }
    
    virtual ~Employee() {}
};

class Manager : public Employee {
public:
    Manager(string n, double s) : Employee(n, s) {}
    
    double calculateBonus() override {
        return salary * 0.10;
    }
};

int main() {
    Employee *emp = new Manager("John", 100000);
    cout << "Bonus: " << emp->calculateBonus() << endl;
    delete emp;
    
    return 0;
}
/* Output:
Bonus: 10000
*/
