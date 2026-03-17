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
    void insertAt(int id, int pos){
        if (pos<=0){
            addEmg(id);;
            return;
        }
        node*temp =head;
        for (int i = 0 ; i<pos&&temp! = nullptr,i++){
            temp = temp->next;
        }
        if(temp==nullptr){
            cout<<"invalid position";
            return S;
        }
    }
    node*newNode = new Node { id, temp->next};
    temp -> node = newNode;
    cout<<"patient admitted";

    void dischargeFirst(){
        if(isEmpty()){
            cout<<"empty";
            return ;
        }
        node temp = head ;
        head = head->next;
        delete temp;
    }