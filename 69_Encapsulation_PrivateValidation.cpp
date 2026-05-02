#include <iostream>
using namespace std;

class User {
private:
    string username;
    string email;
    string password;
    
    bool isValidEmail(string e) {
        return e.find('@') != string::npos;
    }
    
    bool isStrongPassword(string pwd) {
        return pwd.length() >= 8;
    }
    
public:
    User(string u, string e, string pwd) : username(u) {
        if (isValidEmail(e)) {
            email = e;
        }
        if (isStrongPassword(pwd)) {
            password = pwd;
        }
    }
    
    void display() {
        cout << "Username: " << username << ", Email: " << email << endl;
    }
};

int main() {
    User u("john_doe", "john@example.com", "password123");
    u.display();
    
    return 0;
}
/* Output:
Username: john_doe, Email: john@example.com
*/
