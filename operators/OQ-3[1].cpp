#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int X, Y, R;
    double interest, amount, discount, final_settlement;
    cin>>X;//Principal amount
    cin>>R;//Rate of interest
    cin>>Y;//Time period in years
    interest=(X*R*Y)/100.0;
    amount=X+interest;
    discount=interest*0.02;
    final_settlement=amount-discount;
    cout<<fixed<<setprecision(2);
    cout<<interest<<endl;
    cout<<amount<<endl;
    cout<<discount<<endl;
    cout<<final_settlement<<endl;
    return 0;
}
