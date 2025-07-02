#include<iostream>
using namespace std;
int main(){
  int n,m=0;
  
  do{
  cin>>n;
  if(n>0){
    m+=n;
  }
  }while(n>0);
  
  cout<<m;
  
}
