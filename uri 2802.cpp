#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double n;
    cin>>n;
    cout<<fixed<<setprecision(0)<<((n*n*n*n)-(6.0*(n*n*n))+ (23.0 * (n*n)) - (18.0*n)+24.0)/24.0<<endl;
}
///logic less
