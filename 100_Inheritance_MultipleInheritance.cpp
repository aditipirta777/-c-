#include <iostream>
using namespace std;

class Father {
protected:
    string lastName;
    
public:
    Father(string name) : lastName(name) {}
};

class Mother {
protected:
    string firstName;
    
public:
    Mother(string name) : firstName(name) {}
};

class Child : public Father, public Mother {
public:
    Child(string f, string l) : Father(l), Mother(f) {}
    
    void displayName() {
        cout << "Full Name: " << firstName << " " << lastName << endl;
    }
};

int main() {
    Child c("John", "Doe");
    c.displayName();
    
    return 0;
}
/* Output:
Full Name: John Doe
*/
