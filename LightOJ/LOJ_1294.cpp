#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll tc,n,m;
    cin>>tc;
    for(int i=1; i<=tc; i++){
    	cin>>n>>m;
    	cout<<"Case "<<i<<": "<<(n*m)/2<<endl;
    }

}