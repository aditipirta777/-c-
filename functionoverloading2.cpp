#include<iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Math obj;

    cout << obj.add(2, 3) << endl;      // 2 parameters
    cout << obj.add(2, 3, 4) << endl;   // 3 parameters

    return 0;
}