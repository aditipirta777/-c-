#include <iostream>
#include <fstream>
using namespace std;

int main() {
    try {
        ifstream file("nonexistent.txt");
        if (!file.is_open()) {
            throw runtime_error("File not found!");
        }
    } catch (runtime_error &e) {
        cout << "Error: " << e.what() << endl;
    }
    
    return 0;
}
/* Output:
Error: File not found!
*/
