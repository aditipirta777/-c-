#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};

// Insert at end (taaki list bana sake)
void insertAtTail(Node*& head, int d) {
    Node* temp = new Node(d);

    if (head == NULL) {
        head = temp;
        return;
    }

    Node* curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = temp;
}

// Delete node by value
void deleteNode(Node*& head, int value) {

    // empty list
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    // delete first node
    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    // delete middle or last node
    Node* curr = head;

    while (curr->next != NULL && curr->next->data != value) {
        curr = curr->next;
    }

    if (curr->next == NULL) {
        cout << "Value not found\n";
        return;
    }

    Node* temp = curr->next;
    curr->next = temp->next;
    delete temp;
}

// Print list
void print(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;

    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);

    cout << "Original List: ";
    print(head);

    deleteNode(head, 20);

    cout << "After Deletion: ";
    print(head);

    return 0;
}