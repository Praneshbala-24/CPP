/*Create a class named Innings with the following public member variables/attributes

Data Type   Variable Name
String             number
String             battingTeam
Long               runs

Include a method in the class named display innings Details in this method, display the details of the innings in the format shown in

Create another class named Main and write a main method to test the above class

Input and Output Format:
Refer to sample input and output for formatting specifications
All text in bold corresponds to input and the nest corresponds to output


Constraints:
Constraints:
number should be a non-empty string (e.g., "First", "Second").
battingTeam should be a valid string with at least one character.
runs should be a non-negative integer (0 or more).

Example:
Sample input 1: 
Enter the innings number
Firstinnings
Enter the BattingTeam
CSK 
Enter the runs scored
190

Sample Output 1:
Innings Details:
Innings number: Firstinnings
BattingTeam: CSK
Runs scored: 190*/
#include <iostream>
#include <string>
using namespace std;
class Innings {
public:
    string number;
    string battingTeam;
    long runs;
    void displayInningsDetails() {
        cout << "Innings Details:" << endl;
        cout << "Innings number: " << number << endl;
        cout << "BattingTeam: " << battingTeam << endl;
        cout << "Runs scored: " << runs << endl;
    }
};
int main() {
    Innings in;
    getline(cin, in.number);
    getline(cin, in.battingTeam);
    cin >> in.runs;

    in.displayInningsDetails();

    return 0;
}
