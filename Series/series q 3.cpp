#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int term = 6;
    int diff = 3;
    for (int i = 0; i < n; i++) {
        cout << term << " ";
        term = term + diff;
        diff += 2;  
    }
    return 0;
}

Second method

#include<iostream>
using namespace std;
int main(){
  int n;cin>>n;
  int sum=0;
  int a=6,b=3;
  for(int i=1;i<=n;i++){
    cout<<a<<" ";
    a=a+b;
    b+=2;
  }
}
