// array is a collection of homogenous elements 
//insert = at end , at specific position
/* delete
update
sort
search
max 
min
*/
//inventory system me item ko search , delete , maximum min


#include<iostream>
using namespace std;

class Inventory {
    int size, capacity;
    int item[100];   // encapsulated array

    bool isValid(int index) {
        return index >= 0 && index < size;
    }

public:

    Inventory(int cap = 100) {
        capacity = cap;
        size = 0;
    }

    // Insert at end
    void insert(int value) {
        if (size >= capacity) {
            cout << "Inventory Full\n";
            return;
        }

        item[size++] = value;
    }

    // Insert at specific position
    void insertAt(int index, int value) {

        if (size >= capacity || index < 0 || index > size) {
            cout << "Invalid Position\n";
            return;
        }

        // shift elements right
        for (int i = size; i > index; i--) {
            item[i] = item[i - 1];
        }

        item[index] = value;
        size++;
    }

    void display() {
        for (int i = 0; i < size; i++) {
            cout << item[i] << " ";
        }
        cout << endl;
    }
};

int main() {

    Inventory obj;

    obj.insert(10);
    obj.insert(20);
    obj.insert(30);

    obj.insertAt(1, 99);

    obj.display();

    return 0;
}