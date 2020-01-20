#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k2,k3,k5,k6,m;
    cin>>k2>>k3>>k5>>k6;
    m = min(k2,min(k5,k6));
    k2-=m;
    cout<<m*256+32*min(k2,k3)<<endl;

}
