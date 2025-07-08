/*Write a function to find whether the given number is a prime or not. 
If the given number is prime, then the function will return as '1', other wise it returns as '0'.

Input Format:
Input consists of single integer input represents the given num value

Output Format:
Prints 'Prime' or 'Not prime'

Example:
Sample Input:
5
Sample Output:
Prime*/
#include <iostream>
using namespace std;
int isPrime(int n) {
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main() {
    int num;
    cin >> num;
    if (isPrime(num))
        cout << "Prime";
    else
        cout << "Not prime";
    return 0;
}
