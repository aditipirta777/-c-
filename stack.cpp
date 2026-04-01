#include<iostream>
using namespace std;

class Stack {
    int top;
    int arr[5];

public:
    Stack() {
        top = -1;
    }

    // Push
    void push(int x) {
        if (top == 4) {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = x;
    }

    // Pop
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow" << endl;
            return;
        }
        cout << "Deleted: " << arr[top--] << endl;
    }

    // Peek
    void peek() {
        if (top == -1) {
            cout << "Stack Empty" << endl;
            return;
        }
        cout << "Top element: " << arr[top] << endl;
    }

    // Display
    void display() {
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << endl;
        }
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.pop();
    s.peek();

    return 0;
}