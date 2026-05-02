#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() = 0;
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Woof! Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "Meow! Meow!" << endl;
    }
};

int main() {
    Animal *animals[2];
    animals[0] = new Dog();
    animals[1] = new Cat();
    
    animals[0]->speak();
    animals[1]->speak();
    
    delete animals[0];
    delete animals[1];
    
    return 0;
}
/* Output:
Woof! Woof!
Meow! Meow!
*/
