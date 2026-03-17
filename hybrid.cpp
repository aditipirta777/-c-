#include<iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B : public A {};
class C : public A {};

class D : public B, public C {
public:
    void showD() {
        cout << "Class D" << endl;
    }
};

int main() {
    D obj;

    obj.B::showA(); // ambiguity avoid
    obj.C::showA();

    obj.showD();

    return 0;
}