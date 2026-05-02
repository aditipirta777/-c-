#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    double salary;
    
public:
    Employee(string n, double s) : name(n), salary(s) {}
    
    virtual void printInfo() {
        cout << "Name: " << name << ", Salary: " << salary << endl;
    }
    
    virtual ~Employee() {}
};

class Manager : public Employee {
private:
    int teamSize;
    
public:
    Manager(string n, double s, int t) : Employee(n, s), teamSize(t) {}
    
    void printInfo() override {
        Employee::printInfo();
        cout << "Team Size: " << teamSize << endl;
    }
};

int main() {
    Employee *emp = new Manager("John", 100000, 5);
    emp->printInfo();
    delete emp;
    
    return 0;
}
/* Output:
Name: John, Salary: 100000
Team Size: 5
*/
