#include <iostream>
using namespace std;

template <typename T>
class Stack {
private:
    T *elements;
    int top;
    int maxSize;
    
public:
    Stack(int size) : maxSize(size), top(-1) {
        elements = new T[maxSize];
    }
    
    void push(T value) {
        if (top < maxSize - 1) {
            elements[++top] = value;
        }
    }
    
    T pop() {
        if (top >= 0) {
            return elements[top--];
        }
        return T();
    }
    
    ~Stack() {
        delete[] elements;
    }
};

int main() {
    Stack<int> intStack(5);
    intStack.push(10);
    intStack.push(20);
    
    cout << "Popped: " << intStack.pop() << endl;
    
    return 0;
}
/* Output:
Popped: 20
*/
