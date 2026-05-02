#include <iostream>
using namespace std;

class Bank {
public:
    virtual double calculateInterest(double principal) = 0;
    virtual ~Bank() {}
};

class SBI : public Bank {
public:
    double calculateInterest(double principal) override {
        return principal * 0.08;
    }
};

class ICICI : public Bank {
public:
    double calculateInterest(double principal) override {
        return principal * 0.07;
    }
};

int main() {
    Bank *bank1 = new SBI();
    Bank *bank2 = new ICICI();
    
    cout << "SBI Interest: " << bank1->calculateInterest(10000) << endl;
    cout << "ICICI Interest: " << bank2->calculateInterest(10000) << endl;
    
    delete bank1;
    delete bank2;
    
    return 0;
}
/* Output:
SBI Interest: 800
ICICI Interest: 700
*/
