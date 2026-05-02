#include <iostream>
using namespace std;

class InsufficientBalance : public exception {
public:
    const char* what() const noexcept {
        return "Insufficient balance!";
    }
};

class BankAccount {
private:
    double balance;
    
public:
    BankAccount(double initial) : balance(initial) {}
    
    void withdraw(double amount) {
        if (amount > balance) {
            throw InsufficientBalance();
        }
        balance -= amount;
        cout << "Withdrawn: " << amount << endl;
    }
};

int main() {
    BankAccount acc(1000);
    
    try {
        acc.withdraw(500);
        acc.withdraw(600);
    } catch (InsufficientBalance &e) {
        cout << "Error: " << e.what() << endl;
    }
    
    return 0;
}
/* Output:
Withdrawn: 500
Error: Insufficient balance!
*/
