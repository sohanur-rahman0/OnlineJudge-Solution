#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,x,c,w;
    vector<long>v;
    while(cin>>n,n){
        v.clear();
        while(n--){
                cin>>x;
                v.push_back(x);
        }
        c = 0;
        while(v.size()>1)
        {
            sort(v.begin(),v.end());
            //cout<<v[0]<<" "<<v[1]<<endl;
            w=v[0]+v[1];
            c+=w;
            v[1] = w;
            v.erase(v.begin());
        }
        cout<<c<<'\n';
    }
}
