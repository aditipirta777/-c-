#include <iostream>
using namespace std;

class Emp
{
public:
    virtual void sal()
    {
        cout << "Employee Salary";
    }
    ~Emp(){

        
    };
};

class Manager : public Emp
{
public:
    void sal()
    {
        cout << "Manager Salary";
    }
};

int main()
{
    Emp *ptr;
    Manager m;

    ptr = &m;
    ptr->sal();   // Runtime polymorphism

    return 0;
}