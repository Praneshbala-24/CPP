/*Write a C program to create a structure called employee with name, employee id, name, age designation and salary as data members. 
Accept employee details and display it.

Example:
SAMPLE INPUT & OUTPUT:

Enter name:
Rajarajan
Enter ID:
001
Enter age:
24
Enter designation:
Manager
Enter Salary:
20000
Employee Details
Name of the Employee : Rajarajan 
ID of the Employee : 1 
Age of the Employee : 24 
Designation of the Employee : Manager 
Salary of the Employee : 20000.00 */
#include <iostream>
#include <iomanip>
using namespace std;

struct Employee {
    string name;
    int id;
    int age;
    string designation;
    double salary;
};

int main() {
    Employee emp;
    cout << "Enter name: "<<endl;
    getline(cin, emp.name);  

    cout << "Enter ID: "<<endl;
    cin >> emp.id;

    cout << "Enter age: "<<endl;
    cin >> emp.age;

    cin.ignore();
    cout << "Enter designation: "<<endl;
    getline(cin, emp.designation);

    cout << "Enter Salary: ";
    cin >> emp.salary;
    cout << "\nEmployee Details\n";
    cout << "Name of the Employee : " << emp.name << endl;
    cout << "ID of the Employee : " << emp.id << endl;
    cout << "Age of the Employee : " << emp.age << endl;
    cout << "Designation of the Employee : " << emp.designation << endl;
    cout << "Salary of the Employee : " << fixed << setprecision(2) << emp.salary << endl;

    return 0;
}
