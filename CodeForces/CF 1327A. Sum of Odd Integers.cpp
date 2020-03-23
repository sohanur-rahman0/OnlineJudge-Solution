#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,k,tc;
    cin>>tc;
    while(tc--){
        cin>>n>>k;
        if(n==1 && k==1)
            cout<<"YES"<<endl;
        else if(n<=k)
            cout<<"NO"<<endl;
        else if(n%2==0 && k%2==1)
            cout<<"NO"<<endl;
        else if(n%2==1 && k%2==0)
            cout<<"NO"<<endl;
        else{
            if(n >= k*k)
                cout<<"YES"<<endl;
            else{
                cout<<"NO"<<endl;
            }
        }

    }
}
