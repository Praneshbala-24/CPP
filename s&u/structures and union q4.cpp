/*Write a C program to store the employee details using Union.
Example:
SAMPLE INPUT:
Ram
10000
SAMPLE OUTPUT:
Enter the Employee details
Enter the Employee name
Ram
Enter the Employee salary
10000
Employee Details
10000*/
#include <iostream>
using namespace std;

union Employee {
    char name[20];
    int salary;
};

int main() {
    Employee emp;
    cout << "Enter the Employee details\n";
    cout << "Enter the Employee name\n";
    cin >> emp.name;
    cout << "Enter the Employee salary\n";
    cin >> emp.salary;
    cout << "Employee Details\n";
    cout << emp.salary << endl;  
    return 0;
}
