#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,in;
    set<ll>cd;
    while(cin>>n>>m,n,m){
        cd.clear();
        while(n--){
            cin>>in;
            cd.insert(in);
        }
        ll count=0;
        while(m--){
            cin>>in;
            if(cd.find(in)!=cd.end())count++;
        }
        cout<<count<<'\n';
    }

}
