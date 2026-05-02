#include <iostream>
using namespace std;

class Array {
private:
    int *elements;
    int size;
    
public:
    Array(int s) : size(s) {
        elements = new int[size];
    }
    
    int& operator[](int index) {
        return elements[index];
    }
    
    ~Array() {
        delete[] elements;
    }
};

int main() {
    Array arr(5);
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    
    cout << "arr[0]: " << arr[0] << endl;
    cout << "arr[1]: " << arr[1] << endl;
    
    return 0;
}
/* Output:
arr[0]: 10
arr[1]: 20
*/
