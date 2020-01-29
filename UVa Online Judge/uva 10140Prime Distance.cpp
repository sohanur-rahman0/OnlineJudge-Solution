#include<bits/stdc++.h>///didnt solve yet
#define ll long long
ll arr[1000000]= {0};
using namespace std;
void sieve()
{
    for(ll  i=2; i<= 1000000; i++)
    {
        for (ll j=i*i; j<= 1000000; j+=i)
        {
            arr[j-1]=1;

        }
    }
}
int main()
{
    sieve();
    ll l,u;
    arr[1] = 1;
    vector<ll>prime;

    cin>>l>>u;
    for(int i=l; i<=u; i++){
        if(arr[i-1]==0){
            prime.push_back(i);
        }
    }
    for(int i=0; i<prime.size();i++){
        cout<<prime[i]<<" ";
    }
    int l = prime.size();
    ll a,b,x,y;
    for(int i=0; i<l; i++){
        for(int j=i+1; j<l; j++){
            if
        }
    }


}
