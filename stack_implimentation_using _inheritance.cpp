//real world problem inplementation 
//stack and inheritance 

//stack - lifo/filo 
//to implement stack -- array/ linked list 
//push , pop , display(peek)


#include<iostream>
using namespace std;

class Stack {
protected:
    int arr[100];
    int top;

public:
    // constructor (class name same hona chahiye)
    Stack() {
        top = -1;
    }

    void push(int x) {
        if (top == 99) {
            cout << "Overflow\n";
            return;
        }
        arr[++top] = x;
    }

    int pop() {
        if (top == -1) {
            cout << "Underflow\n";
            return -1;
        }
        return arr[top--];
    }

    void display() {
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

// ---------------- SINGLE INHERITANCE ----------------
class BrowserStack : public Stack {
public:
    void visitPage(int page) {
        push(page);
    }
};

// ---------------- MULTILEVEL INHERITANCE ----------------
class SecureBrowserStack : public BrowserStack {
public:
    void secureVisit(int page) {
        visitPage(page);
    }
};

// ---------------- HIERARCHICAL INHERITANCE ----------------
class UndoStack : public Stack {
public:
    void undo() {
        pop();
    }
};

class RedoStack : public Stack {
public:
    void redo() {
        pop();
    }
};

// ---------------- MULTIPLE INHERITANCE ----------------
class EditorStack : public UndoStack, public RedoStack {
public:
    void showUndo() {
        cout << "Undo Stack: ";
        UndoStack::display();
    }

    void showRedo() {
        cout << "Redo Stack: ";
        RedoStack::display();
    }
};

// ---------------- MAIN FUNCTION ----------------
int main() {

    cout << "Browser Stack:\n";
    SecureBrowserStack bs;
    bs.secureVisit(1);
    bs.secureVisit(2);
    bs.secureVisit(3);
    bs.display();

    cout << "\nUndo/Redo Stack:\n";
    EditorStack es;

    es.UndoStack::push(10);
    es.UndoStack::push(20);

    es.RedoStack::push(100);
    es.RedoStack::push(200);

    es.showUndo();
    es.showRedo();

    es.undo();
    es.redo();

    cout << "\nAfter Undo/Redo:\n";
    es.showUndo();
    es.showRedo();

    return 0;
}