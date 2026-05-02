#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;
    static double interestRate;
    
public:
    BankAccount(string accNo) : accountNumber(accNo), balance(0) {}
    
    void setBalance(double b) {
        balance = b;
    }
    
    double calculateInterest() {
        return balance * interestRate;
    }
    
    static void setInterestRate(double rate) {
        interestRate = rate;
    }
};

double BankAccount::interestRate = 0.05;

int main() {
    BankAccount::setInterestRate(0.07);
    
    BankAccount acc("12345");
    acc.setBalance(10000);
    
    cout << "Interest: " << acc.calculateInterest() << endl;
    
    return 0;
}
/* Output:
Interest: 700
*/
