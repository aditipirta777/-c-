#include <iostream>
using namespace std;

class Product {
private:
    string name;
    double price;
    int quantity;
    
public:
    Product(string n, double p, int q) : name(n), price(p), quantity(q) {}
    
    double getTotalValue() const {
        return price * quantity;
    }
    
    void decreaseQuantity(int q) {
        if (q > 0 && q <= quantity) {
            quantity -= q;
        }
    }
    
    void display() const {
        cout << "Product: " << name << ", Price: " << price << ", Quantity: " << quantity << endl;
    }
};

int main() {
    Product prod("Laptop", 50000, 5);
    prod.display();
    cout << "Total Value: " << prod.getTotalValue() << endl;
    
    return 0;
}
/* Output:
Product: Laptop, Price: 50000, Quantity: 5
Total Value: 250000
*/
