#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i;
    double n[100],x;
    cin>>x;
    for(i=0; i<100; i++)
    {
       cout<<"N["<<i<<"] = "<<fixed<<setprecision(4)<<x<<endl;
       x/=2;
    }
    return 0;
}
