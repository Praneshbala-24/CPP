#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int x,y;
    cin>>x;
    cin>>y;
    cout<<"students in a team:" << (x/y)<<endl;
    cout<<"left in a class:" << (x%y);
    return 0;
}
