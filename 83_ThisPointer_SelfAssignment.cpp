#include <iostream>
using namespace std;

class String {
private:
    char *str;
    
public:
    String(const char *s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
    
    String& operator=(const String &s) {
        if (this != &s) {
            delete[] str;
            str = new char[strlen(s.str) + 1];
            strcpy(str, s.str);
        }
        return *this;
    }
    
    ~String() {
        delete[] str;
    }
    
    void display() {
        cout << str << endl;
    }
};

int main() {
    String s1("Hello");
    String s2("World");
    s2 = s1;
    s2.display();
    
    return 0;
}
/* Output:
Hello
*/
