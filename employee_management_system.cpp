#include<vector>
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Employee {
public:
    int id;
    string name;
    float salary;
};

vector<Employee> emp;

void loadFromFile() {
    ifstream file("employee.txt");

    if (!file) {
        cout << "File not found\n";
        return;
    }

    Employee e;

    while (file >> e.id >> e.name >> e.salary) {
        emp.push_back(e);
    }

    file.close();
}

// adding data in file 
void saveToFile(){
    ofstream file("employee.txt", ios::app);
    for (auto &e:emp){    
        file.write((char*)&e,sizeof(e));
    }
    file.close();
}

void addEmployee(){
    Employee e ;
    cout << "Enter id name salary: ";
    cin >> e.id >> e.name >> e.salary;
    emp.push_back(e);
    saveToFile();
}

void display(){
    if (emp.empty()){
        cout << "No data";
    }
    for(auto &e:emp)
    {
        cout << e.id << " " << e.name << " " << e.salary << endl;
    }
}
void Search(){
    int id;
    cout<<"enter id to search";
}

// main function added (required to run)
int main() {
    loadFromFile();

    addEmployee();

    display();

    return 0;
}