#include <iostream>
using namespace std;

class Stack {
private:
    int *elements;
    int top;
    int maxSize;
    
    void resize() {
        if (top >= maxSize - 1) {
            maxSize *= 2;
        }
    }
    
public:
    Stack(int size) : maxSize(size), top(-1) {
        elements = new int[maxSize];
    }
    
    ~Stack() {
        delete[] elements;
    }
    
    void push(int x) {
        if (top < maxSize - 1) {
            elements[++top] = x;
        }
    }
    
    int pop() {
        if (top >= 0) {
            return elements[top--];
        }
        return -1;
    }
};

int main() {
    Stack s(5);
    s.push(10);
    s.push(20);
    cout << "Popped: " << s.pop() << endl;
    
    return 0;
}
/* Output:
Popped: 20
*/
