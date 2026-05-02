#include <iostream>
using namespace std;

class Wallet {
private:
    double balance;
    
    void applyTax(double &amount) {
        amount *= 0.98;
    }
    
public:
    Wallet(double initialBalance) : balance(initialBalance) {}
    
    bool addMoney(double amount) {
        if (amount > 0) {
            balance += amount;
            return true;
        }
        return false;
    }
    
    bool spendMoney(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            return true;
        }
        return false;
    }
    
    double getBalance() const {
        return balance;
    }
};

int main() {
    Wallet w(1000);
    w.addMoney(500);
    w.spendMoney(200);
    cout << "Balance: " << w.getBalance() << endl;
    
    return 0;
}
/* Output:
Balance: 1300
*/
