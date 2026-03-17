#include<iostream>
using namespace std;

class PatientQueue {

    struct node {
        int patientId;
        node* next;
    };

    node* head;

    bool isEmpty() {
        return head == nullptr;
    }

public:
    PatientQueue() {
        head = nullptr;
    }

    // Emergency (insert at beginning)
    void addEmg(int id) {
        node* newNode = new node{id, head};
        head = newNode;
    }

    // Insert at position
    void insertAt(int id, int pos) {
        if (pos <= 0) {
            addEmg(id);
            return;
        }

        node* temp = head;

        for (int i = 0; i < pos - 1 && temp != nullptr; i++) {
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Invalid position\n";
            return;
        }

        node* newNode = new node{id, temp->next};
        temp->next = newNode;

        cout << "Patient admitted\n";
    }

    // Delete first patient
    void dischargeFirst() {
        if (isEmpty()) {
            cout << "Queue empty\n";
            return;
        }

        node* temp = head;
        head = head->next;
        delete temp;

        cout << "First patient discharged\n";
    }

    // Display
    void display() {
        node* temp = head;
        while (temp != nullptr) {
            cout << temp->patientId << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    PatientQueue q;

    q.addEmg(101);
    q.addEmg(102);
    q.insertAt(103, 1);

    q.display();

    q.dischargeFirst();
    q.display();

    return 0;
}