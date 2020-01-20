#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int x,n,s=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n; i+=2)
    {
        s+=v[i+1] - v[i];
    }
    cout<<s<<endl;
}
