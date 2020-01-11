#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>fac;
void CalcDiv(ll n)
{
    ll l = sqrt(n);
    for(ll i = 1; i<=l; i++)
    {
        if(n%i==0){
            if(n/i==i){
                fac.push_back(i);
            }
            else{
                fac.push_back(i);
                fac.push_back(n/i);
            }
        }
    }
}

ll LCM(ll a,ll b){

    ll lcm = (a*b)/__gcd(a,b);
    return lcm;
}
int main()
{
    ll x,a,b;
    cin>>x;
    CalcDiv(x);
    //sort(fac.begin(),fac.end());
    for(auto i:fac){
        //cout<<i<<endl;
        if(LCM(i,x/i)==x){
            a = i;
        }

    }
    b = x/a;
    cout<<b<<' '<<a<<'\n';

}
