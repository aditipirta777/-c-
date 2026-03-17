//array limitation = size is fixed 



// linked list = it has nodes it is not in contigues memory  datastructure used to store value in node and has 
//two parts data and address 
//data = value.......... and address = points towards next node


/*
array                                linked list 
1 insert = end and start             1 insert start end specific position
                                      2 delete 
2 delete 
3 search
4 update 
5 sort









*/

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

    // Destructor
    ~PatientQueue() {
        node* temp;
        while (head != nullptr) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }

    // Emergency patient (add at beginning)
    void addEmg(int id) {
        node* newNode = new node{ id, head };
        head = newNode;
        cout << "Emergency patient admitted\n";
    }

    // Regular patient (add at end)
    void addReg(int id) {

        node* newNode = new node{ id, nullptr };

        if (isEmpty()) {
            head = newNode;
        } else {
            node* temp = head;

            while (temp->next != nullptr) {
                temp = temp->next;
            }

            temp->next = newNode;
        }

        cout << "Regular patient admitted\n";
    }

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

    PatientQueue pq;

    pq.addReg(101);
    pq.addReg(102);
    pq.addEmg(999);

    pq.display();

    return 0;
}