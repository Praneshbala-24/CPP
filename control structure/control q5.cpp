#include<iostream>
#include<iomanip>
using namespace std;
int main(){
  int a,b=0,d=0;
  int c1=0,c2=0;
  cin>>a;
  while(a!=-1){
    if(a%2==0){
      b+=a;
      c1++;
    }else{
      d+=a;
      c2++;
    }
    cin>>a;
  }
  cout<<b<<endl<<d<<endl;
  float e=(float)b/c1;
  float f=(float)d/c2;
  cout<<fixed<<setprecision(2)<<e<<endl;
  cout<<fixed<<setprecision(2)<<f;
}
