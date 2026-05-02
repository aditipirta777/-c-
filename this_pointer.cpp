#include<iostream>
using namespace std;

class Demo {
public:
    int x;

    void setX(int x) {
        this->x = x;   // current object ka x
    }

    void show() {
        cout << x;
    }
};

int main() {
    Demo d;
    d.setX(50);
    d.show();
}