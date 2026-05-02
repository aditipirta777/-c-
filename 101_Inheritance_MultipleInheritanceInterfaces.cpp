#include <iostream>
using namespace std;

class Drawable {
public:
    virtual void draw() = 0;
    virtual ~Drawable() {}
};

class Movable {
public:
    virtual void move() = 0;
    virtual ~Movable() {}
};

class Character : public Drawable, public Movable {
public:
    void draw() override {
        cout << "Drawing character" << endl;
    }
    
    void move() override {
        cout << "Character moving" << endl;
    }
};

int main() {
    Character c;
    c.draw();
    c.move();
    
    return 0;
}
/* Output:
Drawing character
Character moving
*/
