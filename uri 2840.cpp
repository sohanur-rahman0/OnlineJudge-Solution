#include<bits/stdc++.h>
#define pi 3.1415

using namespace std;

int main()
{
    int r,l;
    cin>>r>>l;
    ///logic/// Volume of a spehere is = 4/3*pi*r^3
    cout<<floor(l/((4.0/3.0)*pi*r*r*r))<<endl;
    return 0;
}
