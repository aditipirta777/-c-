#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("output.txt");
    
    if (file.is_open()) {
        file << "Hello World" << endl;
        file << "C++ Programming" << endl;
        file.close();
        cout << "File written successfully" << endl;
    } else {
        cout << "Error opening file" << endl;
    }
    
    return 0;
}
/* Output:
File written successfully
*/
