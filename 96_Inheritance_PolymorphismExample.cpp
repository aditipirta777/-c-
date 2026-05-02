#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "Animal sound" << endl;
    }
    
    virtual ~Animal() {}
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Meow" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Woof" << endl;
    }
};

int main() {
    Animal *animals[2];
    animals[0] = new Cat();
    animals[1] = new Dog();
    
    animals[0]->makeSound();
    animals[1]->makeSound();
    
    delete animals[0];
    delete animals[1];
    
    return 0;
}
/* Output:
Meow
Woof
*/
