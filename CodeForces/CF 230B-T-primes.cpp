#include<bits/stdc++.h> ///didnt solve yet
using namespace std;
#define ll long long
vector<ll>tprime;
bool sieve(ll n){
   if(n>1){
    for(int i=2; i*i<=n; i++){
        if(n%i==0)return false;
    }return true;
   }return false;

}
void gen(){
    for(ll i=1; i<1000000; i++){
        if(sieve(i)){
            tprime.push_back(i*i);
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    bool flag;
    gen();
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        flag = binary_search(tprime.begin(),tprime.end(),arr[i]);
        if(flag)
            cout<<"YES"<<'\n';
        else
            cout<<"NO"<<'\n';
    }
}
