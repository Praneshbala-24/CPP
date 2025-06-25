#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    cout<<"Enter the third number:";
    cin>>c;
    if(a>b)
    {
      cout<<a<<" "<<"A is greater";
    }
    else if(b>c)
    {
        cout<<b<<" "<< "B is greater";
    }
    else
    {
      cout<<c<<" "<<"C is greater";
    }
      return 0;
}