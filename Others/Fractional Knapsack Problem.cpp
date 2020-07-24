#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,w;
    cin>>n>>w;
    double value[n],weight[n];
  

    multimap<double, ll, greater<double>>pro;

    for (int i = 0; i < n; ++i)
    {
        cin>>value[i]>>weight[i];
        pro.insert(make_pair(value[i]/weight[i],i));
    }

    double ans = 0;

    for(auto itr:pro){
        if(w==0)break;
        //double current = itr.first;
        ll index = itr.second;

        if(w>weight[index]){
            ans+= value[index];
            w-=weight[index];
        }else{
            ans += value[index]*(w/weight[index]);
            w = 0;
        }
    }

    cout<<fixed<<setprecision(8)<<ans<<endl;

   
    }

