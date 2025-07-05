#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

class Employee {
private:
    int employeeId;
    string employeeName;
    double salary;

public:
    void setEmployeeId(int id) {
        employeeId = id;
    }

    void setEmployeeName(string name) {
        employeeName = name;
    }

    void setSalary(double sal) {
        salary = sal;
    }

    int getEmployeeId() {
        return employeeId;
    }

    string getEmployeeName() {
        return employeeName;
    }

    double getSalary() {
        return salary;
    }
};

int main() {
    Employee emp;
    int id;
    string name;
    double salary;

    cout << "Enter Employee ID: "<<endl;
    cin >> id;
    cin.ignore();

    cout << "Enter Employee Name: "<<endl;
    getline(cin, name);

    cout << "Enter Salary: "<<endl;
    cin >> salary;

    emp.setEmployeeId(id);
    emp.setEmployeeName(name);
    emp.setSalary(salary);

    cout << "Employee Details:" << endl;
    cout << "Employee ID: " << emp.getEmployeeId() << endl;
    cout << "Employee Name: " << emp.getEmployeeName() << endl;

    cout << "Salary: ";
    // Only print decimal if necessary
    if (fmod(emp.getSalary(), 1.0) == 0)
        cout << fixed << setprecision(0) << emp.getSalary() << endl;
    else
        cout << fixed << setprecision(2) << emp.getSalary() << endl;

    return 0;
}
