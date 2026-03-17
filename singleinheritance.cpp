#include <iostream>
#include <string>
using namespace std;

// Parent / Base class
class Employee
{
protected:
    string name;

public:
    Employee(string n)
    {
        name = n;
    }
};

// Child / Derived class
class Faculty : public Employee
{
public:
    Faculty(string n) : Employee(n)
    {
    }

    void display()
    {
        cout << "Faculty Name: " << name << endl;
    }
};

int main()
{
    Faculty f("Anurag");   // object of child class
    f.display();

    return 0;
}