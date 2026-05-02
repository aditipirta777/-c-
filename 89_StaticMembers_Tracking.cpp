#include <iostream>
using namespace std;

class Database {
private:
    static int connectionCount;
    string dbName;
    
public:
    Database(string name) : dbName(name) {
        connectionCount++;
        cout << "Connected to " << dbName << endl;
    }
    
    ~Database() {
        connectionCount--;
        cout << "Disconnected from " << dbName << endl;
    }
    
    static int getConnectionCount() {
        return connectionCount;
    }
};

int Database::connectionCount = 0;

int main() {
    Database db1("DB1");
    cout << "Connections: " << Database::getConnectionCount() << endl;
    
    {
        Database db2("DB2");
        cout << "Connections: " << Database::getConnectionCount() << endl;
    }
    
    cout << "Connections: " << Database::getConnectionCount() << endl;
    
    return 0;
}
/* Output:
Connected to DB1
Connections: 1
Connected to DB2
Connections: 2
Disconnected from DB2
Connections: 1
Disconnected from DB1
*/
