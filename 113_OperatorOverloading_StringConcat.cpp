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
    
    String operator+(const String &s) {
        char *temp = new char[strlen(str) + strlen(s.str) + 1];
        strcpy(temp, str);
        strcat(temp, s.str);
        return String(temp);
    }
    
    void display() {
        cout << str << endl;
    }
    
    ~String() {
        delete[] str;
    }
};

int main() {
    String s1("Hello ");
    String s2("World");
    String s3 = s1 + s2;
    
    s3.display();
    
    return 0;
}
/* Output:
Hello World
*/
