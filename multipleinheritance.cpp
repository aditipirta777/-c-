//multiple inheritance == multiple parents or single child is inherited from multiple parents


/*#include<iostream>
using namespace std;
class Faculty{                       // base class 
    void finfo(){
        cout<<"faculty info";
    }
};
class Student{                       // base class 
    void sinfo(){     
        cout<<"student #info";
    }
};
class University : public Faculty , public Student       /// child classs

*/



//multilevel inheritance    chain of classes 


// hiererical class inheritance  == multiple class inherited from same base class 
// hybrid == comination of  multiple type of inheritance 
// absract class  == virtual functions 
#include<iostream>
using namespace std;

class Grandparent {
public:
    void gp() {
        cout << "Grandparent class" << endl;
    }
};

class Parent : public Grandparent {
public:
    void p() {
        cout << "Parent class" << endl;
    }
};

class Child : public Parent {
public:
    void c() {
        cout << "Child class" << endl;
    }
};

int main() {
    Child obj;
    obj.gp();
    obj.p();
    obj.c();
    return 0;
}