#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n;
    cin>>n>>a>>b;
    n/=2;

    if((a==n || n+1==a) && (b==n || n+1==b))
        cout<<"NO"<<'\n';
    else
        cout<<"YES"<<'\n';
}
