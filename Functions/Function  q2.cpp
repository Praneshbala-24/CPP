/*Write a  function to find the factorial of a given number. 
INPUT & OUTPUT FORMAT:

Input consists of 1 integer.
The output consists of 1 integer

Example:
SAMPLE INPUT:
5
SAMPLE OUTPUT:
120*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  int a;
  cin>>a;
  int fact = 1;
  for(int i = 1;i <= a;i++){
  fact = fact*i;
  }
  cout<<fact;
  return 0;
}
