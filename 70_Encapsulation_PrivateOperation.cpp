#include <iostream>
using namespace std;

class Bank {
private:
    string bankName;
    double reserve;
    
    void deductFee() {
        if (reserve > 100) {
            reserve -= 100;
        }
    }
    
public:
    Bank(string name, double res) : bankName(name), reserve(res) {}
    
    void monthlyMaintenance() {
        deductFee();
        cout << "Monthly maintenance done" << endl;
    }
    
    double getReserve() const {
        return reserve;
    }
};

int main() {
    Bank b("MyBank", 5000);
    b.monthlyMaintenance();
    cout << "Reserve: " << b.getReserve() << endl;
    
    return 0;
}
/* Output:
Monthly maintenance done
Reserve: 4900
*/
