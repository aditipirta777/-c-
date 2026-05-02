#include <iostream>
using namespace std;

class Account {
private:
    string accountNumber;
    double balance;
    string pin;
    
public:
    Account(string accNo, string p) : accountNumber(accNo), pin(p), balance(0) {}
    
    bool withdraw(string p, double amount) {
        if (p == pin && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
            return true;
        }
        cout << "Invalid PIN or insufficient balance" << endl;
        return false;
    }
    
    double checkBalance(string p) {
        if (p == pin) {
            return balance;
        }
        cout << "Invalid PIN" << endl;
        return -1;
    }
};

int main() {
    Account acc("123456", "1234");
    acc.withdraw("1234", 100);
    cout << "Balance: " << acc.checkBalance("1234") << endl;
    
    return 0;
}
/* Output:
Withdrawn: 100
Balance: -100
*/
