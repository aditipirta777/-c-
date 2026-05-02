#include<iostream>
using namespace std;

class Demo {
private:
    int x;

public:
    Demo() {
        x = 10;
    }

    friend void show(Demo obj); // friend declaration
};

void show(Demo obj) {
    cout << "Value of x: " << obj.x;
}

int main() {
    Demo d;
    show(d);
}