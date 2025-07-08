/*Create a class named Venue with the following member variables/attributes (Default access)

Data Type             Variable Name
String                        name
String                        city

Create another class called Main and write a main method to test the above class.

Input and Output Format.
Refer sample input and output for formatting specifications.
All text in bold corresponds to input and the rest corresponds to output.


Constraints:
Constraints:
1 ≤ Length of name, city ≤ 50
name and city contain only uppercase and lowercase English letters (a-z, A-Z) and spaces
The input should be taken in the given order: name, city
The output should follow the exact formatting as shown in the sample
No additional methods should be created apart from the default constructor and main method

Example:
Sample Input :
Enter the venue name
M. A. Chidambaram Stadium
Enter the city name
Chennai

Sample Output :
Venue Details:
Venue Name: M. A. Chidambaram Stadium
City Name: Chennai */
#include <iostream>
#include <string>
using namespace std;
class Venue 
{
    string name;
    string city;
    friend int main();
};
int main() 
{
    Venue v;
    getline(cin, v.name);
    getline(cin, v.city);
    cout << "Venue Details:" << endl;
    cout << "Venue Name: " << v.name << endl;
    cout << "City Name: " << v.city << endl;;
    return 0;
}
