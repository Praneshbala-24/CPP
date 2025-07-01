/*Write a C program to generate employee payroll using structures.
Example:
SAMPLE INPUT & OUTPUT:
Enter the number of employees: 2
Enter your input for every employee:
Employee ID: 101
Employee Name: Rajkumar
Basic Salary, HRA: 5000 500
DA, Medical Allowance: 300 500
PF and Insurance: 1000 400
Employee ID: 102
Employee Name: Ramkumar
Basic Salary, HRA: 3000 200
DA, Medical Allowance: 300 500
PF and Insurance: 800 200
Enter employee ID to get payslip: 101
Salary Slip of Rajkumar:
Employee ID: 101
Basic Salary: 5000
House Rent Allowance: 500
Dearness Allowance: 300
Medical Allowance: 500
Gross Salary: 75600.00 Rupees
Deductions:
Provident fund: 1000
Insurance: 400
Net Salary: 58800.00 Rupees#include <iostream>
using namespace std;*/
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

// Define the structure for employee details
struct Employee {
    int id;
    string name;
    double basicSalary;
    double hra;  // House Rent Allowance
    double da;   // Dearness Allowance
    double medicalAllowance;
    double pf;   // Provident Fund
    double insurance;
};

// Function to calculate salary details
void printPayslip(const Employee &emp) {
    double grossSalary = emp.basicSalary + emp.hra + emp.da + emp.medicalAllowance;
    double deductions = emp.pf + emp.insurance;
    double netSalary = grossSalary - deductions;

    // Print the payslip
    cout << "Salary Slip of " << emp.name << ":\n";
    cout << "Employee ID: " << emp.id << endl;
    cout << "Basic Salary: " << fixed << setprecision(2) << emp.basicSalary << endl;
    cout << "House Rent Allowance: " << fixed << setprecision(2) << emp.hra << endl;
    cout << "Dearness Allowance: " << fixed << setprecision(2) << emp.da << endl;
    cout << "Medical Allowance: " << fixed << setprecision(2) << emp.medicalAllowance << endl;
    cout << "Gross Salary: " << fixed << setprecision(2) << grossSalary << " Rupees\n";
    cout<< endl;
    cout << "Deductions:\n";
    cout << "Provident fund: " << fixed << setprecision(2) << emp.pf << endl;
    cout << "Insurance: " << fixed << setprecision(2) << emp.insurance << endl;
    cout << "Net Salary: " << fixed << setprecision(2) << netSalary << " Rupees\n";
}

int main() {
    int numEmployees;

    // Ask for the number of employees
    cout << "Enter the number of employees: ";
    cin >> numEmployees;

    vector<Employee> employees(numEmployees);

    // Input employee details
    cout << "Enter your input for every employee:\n";  // Only one prompt
    for (int i = 0; i < numEmployees; ++i) {
        cout << "Employee ID: ";
        cin >> employees[i].id;
        cin.ignore();  // Clear the newline character left by cin

        cout << "Employee Name: ";
        getline(cin, employees[i].name);

        cout << "Basic Salary, HRA: ";
        cin >> employees[i].basicSalary >> employees[i].hra;

        cout << "DA, Medical Allowance: ";
        cin >> employees[i].da >> employees[i].medicalAllowance;

        cout << "PF and Insurance: "<<endl;
        cin >> employees[i].pf >> employees[i].insurance;
    }

    // Ask for employee ID to get the payslip
    int searchId;
    cout << "Enter employee ID to get payslip: ";
    cin >> searchId;

    // Search for the employee by ID and print payslip
    bool found = false;
    for (int i = 0; i < numEmployees; ++i) {
        if (employees[i].id == searchId) {
            printPayslip(employees[i]);
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Employee with ID " << searchId << " not found.\n";
    }

    return 0;
}
