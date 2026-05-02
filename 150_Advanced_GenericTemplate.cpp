#include <iostream>
using namespace std;

template <typename T>
class GenericArray {
private:
    T *arr;
    int size;
    
public:
    GenericArray(int s) : size(s) {
        arr = new T[size];
    }
    
    T& operator[](int index) {
        return arr[index];
    }
    
    ~GenericArray() {
        delete[] arr;
    }
};

int main() {
    GenericArray<int> intArr(3);
    intArr[0] = 10;
    intArr[1] = 20;
    intArr[2] = 30;
    
    cout << "Array: " << intArr[0] << ", " << intArr[1] << ", " << intArr[2] << endl;
    
    GenericArray<string> strArr(2);
    strArr[0] = "Hello";
    strArr[1] = "World";
    
    cout << "String Array: " << strArr[0] << " " << strArr[1] << endl;
    
    return 0;
}
/* Output:
Array: 10, 20, 30
String Array: Hello World
*/
