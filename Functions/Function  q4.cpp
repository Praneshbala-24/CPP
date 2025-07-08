/*Raj’s fitness coach is helping him track his body status based on BMI (Body Mass Index). 
He needs a program that reads Raj’s weight (in kg) and height (in cm) and tells whether he is underweight, 
normal, or obese. 
Depending on the result, a health message should be displayed.

Input Format:
First line: An integer representing weight (in kg)
Second line: An integer representing height (in cm)

Output Format:
A message based on BMI value:
If BMI < 18.5:
"You are underweight. Have an apple daily"
If 18.5 ≤ BMI < 25:
"You are normal. Go walking daily and maintain it"
If BMI ≥ 25:
"You are obese. Go to doctor"

Example:
Sample Input:
75
175
Sample Output:
You are normal. Go walking daily and maintain it.*/
#include <iostream>
using namespace std;

int main() {
    int weight, height_cm;
    cin >> weight >> height_cm;
    float height_m = height_cm / 100.0;
    float bmi = weight / (height_m * height_m);
    if (bmi < 18.5) {
        cout << "You are underweight. Have an apple daily.";
    } else if (bmi < 25) {
        cout << "You are normal. Go walking daily and maintain it.";
    } else {
        cout << "You are obese. Go to doctor.";
    }
    return 0;
}


