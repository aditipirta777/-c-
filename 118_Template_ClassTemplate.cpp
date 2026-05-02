#include <iostream>
using namespace std;

template <typename T>
class Pair {
private:
    T first, second;
    
public:
    Pair(T f, T s) : first(f), second(s) {}
    
    void display() {
        cout << "First: " << first << ", Second: " << second << endl;
    }
};

int main() {
    Pair<int> p1(10, 20);
    Pair<double> p2(3.5, 4.5);
    Pair<string> p3("Hello", "World");
    
    p1.display();
    p2.display();
    p3.display();
    
    return 0;
}
/* Output:
First: 10, Second: 20
First: 3.5, Second: 4.5
First: Hello, Second: World
*/
