#include<bits/stdc++.h>  ///didnt solve yet...
using namespace std;
#define ll long long
ll gcd(ll a,ll b)
{
    if(b==0)return a;
    else
        return gcd(b,a%b);
}
void factor(int n)
{

}
int main()
{
    ll n,c,l;
    while(cin>>n,n){
            c = 0;
        for(int i=1; i<=n; i++)
        {
            for(int j=i; j<=n; j++){
            l = (i*j);
            l/=gcd(i,j);
            if(l==n)c++;
            }
        }
        cout<<c<<'\n';
    }

}

