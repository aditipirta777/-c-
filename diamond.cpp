#include<iostream>
using namespace std;

class Test1{
public:
    void display(){
        cout<<"Test1";
    }
};

class Test2 : virtual public Test1{};
class Test3 : virtual public Test1{};

class Test4 : public Test2 , public Test3{};

int main(){
    Test4 obj;
    obj.display();   // ab ambiguity nahi hogi
}
  // diamond problem solution = virtual inheritance
  //diamond problem occur in multiple inheritance when a class inherit from two class then both inherit from same base class this create  , ambiguity 
  // because the derived class recieve two copies of the base class .. the inheritance structure form a diamond shape
  //thats why it is called diamond problem 
  // there are two ways for this diamond problem 1 scope resolution another one is virtual 