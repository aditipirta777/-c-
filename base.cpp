#include<iostream>
using namespace std;
class Base{
    public:
    virtual void display(){
        cout<<"base class display";
    }
};
class Derived : public Base{
    public:
    void display(){
        cout<<"derived class dispaly";
    }
};
int main(){
    Base *bptr;
    Derived d;
    bptr = &d;
    d.display(); // early binding
    bptr->display();// late binding  jb virtual bnaaya 
    return 0;
}
// virtual function is same as standard member function thhis function declare and define in base class with virtual keyword and redefine  override in derived class 
//with same prototype used for late binding
/* 
for pure virtuaal function declare in base class assigning with zero to the function   virtual void display() = 0;
                                                                                        friend void display();{}
it is not mandatory to override the virtual function*/