#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("output.txt");
    string line;
    
    if (file.is_open()) {
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Error opening file" << endl;
    }
    
    return 0;
}
/* Output:
(Depends on file content)
*/
