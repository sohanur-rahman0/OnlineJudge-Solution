#include<bits/stdc++.h>
using namespace std;
#define l long
int main()
{
    vector<l>s;
    l sum = 0;
    l n;
    cin>>n;
    l a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
        s.push_back(sum);
    }
    l m;
    cin>>m;
    l q[m];
    for(int i=0; i<m; i++){
        cin>>q[i];
        cout<<lower_bound(s.begin(),s.end(),q[i])-s.begin()+1<<'\n';
    }


}
