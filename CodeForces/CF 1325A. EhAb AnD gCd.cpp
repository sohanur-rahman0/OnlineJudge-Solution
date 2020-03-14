#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll tc,n;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        if(n%2==0){
        cout<<n/2<<" "<<n/2<<endl;
        }else{
            cout<<n-1<<" "<<1<<endl;
        }
    }
}
