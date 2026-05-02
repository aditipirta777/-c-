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

// Insert at end
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

// Search element
bool search(Node* head, int key) {
    while (head != NULL) {
        if (head->data == key) {
            return true;
        }
        head = head->next;
    }
    return false;
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

    cout << "List: ";
    print(head);

    int key;
    cout << "Enter value to search: ";
    cin >> key;

    if (search(head, key)) {
        cout << "Element found";
    } else {
        cout << "Element not found";
    }

    return 0;
}