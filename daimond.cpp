#include<iostream>
using namespace std; 

class Test1{


    public:
    void display(){
        cout<<"test1";
    }
};
class Test2:public Test1{};
class Test3: public Test1{};
class Test4 : public Test2 , public Test3{};
  // diamond problem solution = virtual inheritance