#include<iostream>
using namespace std;

// Template Stack class
template <typename T>
class Stack {
protected:
    T arr[100];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(T value) {
        if (top == 99) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = value;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }
        top--;
    }

    T peek() {
        if (top == -1) {
            cout << "Empty Stack\n";
            return T();
        }
        return arr[top];
    }
};

// Undo Stack
template <typename T>
class UndoStack : public Stack<T> {
public:
    void undo() {
        this->pop();   // parent ka pop()
        cout << "Undo operation\n";
    }
};

// Redo Stack
template <typename T>
class RedoStack : public Stack<T> {
public:
    void redo() {
        this->pop();
        cout << "Redo operation\n";
    }
};

// Multiple Inheritance
template <typename T>
class EditorStack : public UndoStack<T>, public RedoStack<T> {
public:
    void performOperation(T value) {
        this->push(value);   // ambiguity avoid karne ke liye
        cout << "Operation performed: " << value << endl;
    }
};

int main() {
    EditorStack<int> editor;

    editor.performOperation(10);
    editor.performOperation(20);

    editor.undo();
    editor.redo();

    return 0;
}
//templte t to store different type of element 