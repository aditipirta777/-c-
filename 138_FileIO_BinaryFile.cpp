#include <iostream>
#include <fstream>
using namespace std;

struct Person {
    string name;
    int age;
};

int main() {
    ofstream file("people.dat", ios::binary);
    
    Person p = {"John", 25};
    file.write((char*)&p, sizeof(Person));
    file.close();
    
    cout << "Binary data written" << endl;
    
    return 0;
}
/* Output:
Binary data written
*/
