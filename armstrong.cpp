#include<iostream>
using namespace std;
int main(){
    int num , rem , sum = 0, original;
    cout << "enter a number ";
    cin >> num;
    original = num;
    while(num>0){
        rem = num%10;
        sum = sum +(rem*rem*rem);
        num = num/10;


    }
    if (sum == original){
        cout<<"it is an amstrong no.";
    }
    else{
        cout<<"it is not a armsrong no";
    }
    return 0 ;
}