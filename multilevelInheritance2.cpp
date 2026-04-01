#include<iostream>
using namespace std;

// Base class
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

// Level 2
class BrowserStack : public Stack {
public:
    void visitPage(int page) {
        push(page);
        cout << "Visited page: " << page << endl;
    }

    void goBack() {
        int page = pop();
        if (page != -1) {
            cout << "Going back from page: " << page << endl;
        }
    }
};

// Level 3
class SecureBrowserStack : public BrowserStack {
public:
    void clearHistory() {
        while (top != -1) {
            pop();
        }
        cout << "History cleared (Secure Mode)" << endl;
    }
};

int main() {
    SecureBrowserStack sb;

    sb.visitPage(1);
    sb.visitPage(2);
    sb.visitPage(3);

    sb.display();

    sb.goBack();

    sb.clearHistory();

    sb.display();

    return 0;
}