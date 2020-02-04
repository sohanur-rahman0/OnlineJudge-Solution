#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll tc;
    ll n;
    cin>>tc;
    while(tc--){
        cin>>n;
        ll ans=n;
        if(n<10){
            cout<<n<<endl;
        }else{
            double temp;
            while(n>=10){
               temp = n/10;
               ans+=temp;
               n-=10*temp;
               n+= 1*temp;
            }
            cout<<ans<<endl;

        }
    }

}
