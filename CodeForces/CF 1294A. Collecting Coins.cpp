#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,b,c,n,tc;

    cin>>tc;
    while(tc--)
    {
        cin>>a>>b>>c>>n;
        if((a+b+c+n)%3!=0){
           cout<<"NO"<<endl;
        }
        else if((a+b+c+n)/3<max(max(a,b),c)){
            cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<<endl;

    }


}




