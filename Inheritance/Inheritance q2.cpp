#include<iostream>
#include<iomanip>
using namespace std;
class Student{
  public:
  void std(){
    string name,address,id;
    int age;
    double grade;
    
    cin.ignore();
    getline(cin,name);
    cin>>id>>age>>grade;
    cin.ignore();
    getline(cin,address);
    
    
    cout<<"Name: "<<name<<endl;
    cout<<"Id: "<<id<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<fixed<<setprecision(1)<<"Grade: "<<grade<<endl;
    cout<<"Address: "<<address<<endl;
    if(grade==0&&grade<35){
      cout<<"Result:"<<"Fail";
    }else{
      cout<<"Result:"<<"Pass";
    }
  }
};
int main(){
  int n;
  cin>>n;
  Student s1;
  
  if(n==1){
    s1.std();
  }else if(n==2){
    s1.std();
  }else if(n==3){
    s1.std();
  }
}
