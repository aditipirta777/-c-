#include<iostream>
using namespace std;
int main(){
    int num , rev = 0 , rem , original;
    cout<<"enter the number";
    cin>> num;
    original=num;
    while(num>0){
        rem = num%10;
        rev = rev*10 + rem;
        num = num /10;
    }
    cout<<"reverse = "<< rev;
    return 0;
}