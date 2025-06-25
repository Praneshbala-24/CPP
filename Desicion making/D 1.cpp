#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    if(a>b)
    {
      cout<<a<<" "<<"A is the greater";
    }
    else if(a=b)
    {
        cout<<a<<" "<< "Number is equal";
    }
    else
    {
      cout<<b<<" "<<"B is the greater";
    }
      return 0;
}