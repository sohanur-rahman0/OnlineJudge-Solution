#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll tc;
    cin>>tc;
    while(tc--){
        ll n;
      cin>>n;
      vector<ll>skill;
      for(ll i=0; i<2*n; i++){
        int temp;
        cin>>temp;
        skill.push_back(temp);
      }
      sort(skill.begin(),skill.end());

      cout<<abs(skill[n-1]-skill[n])<<endl;

    }

}
