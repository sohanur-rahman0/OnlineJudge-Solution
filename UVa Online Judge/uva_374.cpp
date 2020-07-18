#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll bigmod(ll base, ll power, ll mod)
{
	if(power==0){
		return 1;
	}else if(power%2==0){
		return (bigmod(base,power/2,mod) * bigmod(base, power/2, mod)) % mod;
	}else if(power%2==1){
		return (bigmod(base, power-1, mod) * (base % mod)) % mod;
	}
}

int main()
{
    ll base,power,mod;
    while(cin>>base>>power>>mod) {
            cout<<bigmod(base, power, mod)<<endl;
    }
    return 0;
}
