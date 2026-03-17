#include<iostream>
using namespace std;

class Stack {
    struct Node {
        int data;
        Node* next;
    };

    Node* top;

public:
    Stack() {
        top = NULL;
    }

    // Push
    void push(int x) {
        Node* newNode = new Node;
        newNode->data = x;
        newNode->next = top;
        top = newNode;
    }

    // Pop
    void pop() {
        if (top == NULL) {
            cout << "Stack Empty" << endl;
            return;
        }
        Node* temp = top;
        cout << "Deleted: " << temp->data << endl;
        top = top->next;
        delete temp;
    }

    // Peek
    void peek() {
        if (top == NULL) {
            cout << "Stack Empty" << endl;
            return;
        }
        cout << "Top element: " << top->data << endl;
    }
};

int main() {
    Stack s;

    s.push(5);
    s.push(10);
    s.push(15);

    s.peek();
    s.pop();
    s.peek();

    return 0;
}