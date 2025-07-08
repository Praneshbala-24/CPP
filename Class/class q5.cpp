/*Create a class named Player with the following member variables/attributes (Default access)

Data Type                Variable Name
String                       name
String                       country
String                       skill

Create another class named Main and write a main method to test the above class.

Input and Output Format:
Refer sample input and output for formatting specifications.
All text in bold corresponds to input and the rest corresponds to output.


Constraints:
1 ≤ Length of name, country, skill ≤ 50
name, country, and skill contain only uppercase and lowercase English letters (a-z, A-Z) and spaces
The input should be taken in the given order: name, country, skill
The output should follow the exact formatting as shown in the sample
No additional methods should be created apart from the default constructor and main method

Example:
Sample Input and Output:
Enter the player's name
MS Dhoni
Enter the country name
India
Enter the skill
All Rounder
Player Details:
Player Name:MS Dhoni
Country Name: India
Skill: All Rounder*/
#include <iostream>
#include <string>
using namespace std;

class Player {
    string name;
    string country;
    string skill;
    friend int main();
};
int main() {
    Player p;
    getline(cin, p.name);
    getline(cin, p.country);
    getline(cin, p.skill);
    cout << "Player Details:" << endl;
    cout << "Player Name: " << p.name << endl;
    cout << "Country Name: " << p.country << endl;
    cout << "Skill: " << p.skill << endl;

    return 0;
}
