//encapsulation = not just public / private used for binding
/* 1 data hiding 
2 getter and setter 
3 logic validation 

4 read only access   
 */
#include<iostream>
using namespace std;
class bankAccount{       
    string acctt;
    long accNo;                //private 
    double bal;
    bool invalidAmt(double amt ){ // private , hidden , read only access ,logic validation 
        return amt>0;
    }
    public;
    bankAccount(string n, long n ,double,iBal){
        acctt = n;                                    // parametrise constructor = because values are initialised here 
        accNo = n;   // decopy
        if(iBal>=0){
            bal = iBal;
        }
        else {
            bal = 0;                  
        }
    }
    string getaccHolder(){      // get read only access 
        return acctt;

    }
    long get accNumber(){                      
        return accNo;

    }
    double get balance(){
        return bal;
    }
    // controlled modification using public
    void deposit(double amt){       // 
        if(isValid Amount(amt)){
            bal+=amt;
            cout<<"deposited"<<amt;
        }
        else
        cout<<"invalid amount ";
    
    }
    void withdrawal(double amt){
        if(isValidAmount (amt) && amt<=bal){
            bal = amt;
            cout<<"withrawal"<<amt;

        }
        else
        cout<<"";
    }
    int main(){
        backAccount b ("anurag", 1200,1000);
        b.deposit(2000);
        b.withrawl(3000);
        b.bal 
    }

}