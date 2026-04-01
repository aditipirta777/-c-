#include<iostream>
using namespace std;

class BankAccount{
protected:
    double balance;

public:
    BankAccount(double bal){
        balance = bal;
    }

    void deposit(double amount){
        balance += amount;
    }

    void withdraw(double amount){
        balance -= amount;
    }

    void checkBal(){
        cout << "Balance: " << balance << endl;
    }
};

class SavingAccount : public BankAccount{
public:
    SavingAccount(double bal) : BankAccount(bal) {}

    void interest(){
        double t = balance * 0.05;
        balance += t;
    }
};

int main(){
    SavingAccount s(1000);

    s.deposit(500);
    s.withdraw(200);
    s.interest();
    s.checkBal();

    return 0;
}