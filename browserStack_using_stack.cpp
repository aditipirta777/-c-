#include<iostream>
using namespace std;

// Base class Stack
class Stack {
protected:
    int top;
    int arr[5];

public:
    Stack() {
        top = -1;
    }

    void push(int x) {
        if (top == 4) {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = x;
    }

    int pop() {
        if (top == -1) {
            cout << "No page to go back" << endl;
            return -1;
        }
        return arr[top--];
    }

    void display() {
        if (top == -1) {
            cout << "No history" << endl;
            return;
        }
        cout << "History:" << endl;
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << endl;
        }
    }
};

// Derived class
class BrowserStack : public Stack {
public:

    // Visit new page
    void visitPage(int page) {
        push(page);
        cout << "Visited page: " << page << endl;
    }

    // Go back
    void goBack() {
        int page = pop();
        if (page != -1) {
            cout << "Going back from page: " << page << endl;
        }
    }
};

int main() {
    BrowserStack b;

    b.visitPage(1);
    b.visitPage(2);
    b.visitPage(3);

    b.display();

    b.goBack();
    b.display();

    return 0;
}