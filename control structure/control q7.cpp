#include <iostream>
using namespace std;
int main() {
int n;
cin >> n;
int a = 0, b = 1;
int next;
for (int i = 0; i < n; ++i) {
    
    next = a + b;
    a = b;
    b = next;
}
if(next==n){
  cout<<"Fibonacci Number";
}else{
  cout<<"Not Fibonacci Number";
}
return 0;
}
