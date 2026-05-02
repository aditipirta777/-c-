#include<iostream>
using namespace std;
// use the same function with different numbers and type of parameteres for different task .. when we have twop functions with same name but different parameteres different functions are called depending on number of parameteres and datatype of parameteres 
// function overloading can achieve through following rules 
/*1 the name of functions are same and in same class 
2 the number of parameters should be different if any case the number of parameters are same the type of parameter should be diferent 
function overloading me ek hi class hoga 
return type doesnt matter
same entity ko different way me dekhna                                 
                                                                      


*/
class Test{
    int x =10;
    double y = 10.1;
    //because of forward initialization we don't need constructor
    public:
    void sum(int z){
        cout<<x +z<<endl;

    }
    // overloading types 
    void add (double a ){
        cout<<y+a<<endl;
    }
    // number of parameter 
    void add (int m , int n ){
        cout<<x+m+n<<endl;

    }

};
int main(){
    Test obj;
    obj.add(50);
    obj.add(50.2);
    obj.add(10,20);
    return 0;
}
// the overloading functions are called by matching the type and numbers of arguements because this information is available at compile time the compiler selects the proper functions based on 
// its parameter 