#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc,n,p,k,i=1;
    cin>>tc;
    while(tc--)
    {

        cin>>n>>k>>p;
        k+=p;
        k = k%n;
        if(k == 0)k = n;
        cout<<"Case "<<i++<<": "<<k<<endl;
    }
    return 0;
}
