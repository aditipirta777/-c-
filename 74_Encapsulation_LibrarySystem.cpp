#include <iostream>
using namespace std;

class LibraryBook {
private:
    string title;
    string author;
    string isbn;
    int publicationYear;
    
public:
    LibraryBook(string t, string a, string i, int y) 
        : title(t), author(a), isbn(i), publicationYear(y) {}
    
    void displayInfo() {
        cout << "Title: " << title << ", Author: " << author << ", Year: " << publicationYear << endl;
    }
    
    string getIsbn() {
        return isbn;
    }
};

int main() {
    LibraryBook book("C++", "Bjarne", "123456", 2013);
    book.displayInfo();
    
    return 0;
}
/* Output:
Title: C++, Author: Bjarne, Year: 2013
*/
