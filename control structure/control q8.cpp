#include<iostream>
using namespace std;
int main(){
  int d1,d2,c1,c2;
  cin>>d1>>c1>>d2>>c2;
  
  int d3=d1+d2;
  int c3=(c1+c2)%100;
  int c4=(c1+c2)/100;
  int d4=d3+c4;
  
  cout<<d4<<endl;
  cout<<c3;
}
