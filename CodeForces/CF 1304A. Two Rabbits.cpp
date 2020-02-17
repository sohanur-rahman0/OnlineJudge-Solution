#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll tc,x,y,a,b;
    cin>>tc;
    while(tc--){
        cin>>x>>y>>a>>b;
        ll len = y-x;
        ll sum = a+b;
        if(len%sum==0){
            cout<<len/sum<<endl;
        }else{
            cout<<"-1"<<endl;
        }
    }

}
