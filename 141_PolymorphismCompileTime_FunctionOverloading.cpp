#include <iostream>
using namespace std;

class Student {
public:
    void study() {
        cout << "Student is studying" << endl;
    }
    
    void study(string subject) {
        cout << "Student is studying " << subject << endl;
    }
    
    void study(string subject, int hours) {
        cout << "Student is studying " << subject << " for " << hours << " hours" << endl;
    }
};

int main() {
    Student s;
    s.study();
    s.study("Mathematics");
    s.study("Physics", 3);
    
    return 0;
}
/* Output:
Student is studying
Student is studying Mathematics
Student is studying Physics for 3 hours
*/
