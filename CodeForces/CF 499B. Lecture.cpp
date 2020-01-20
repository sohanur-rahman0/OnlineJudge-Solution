#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,string>dict;
    int n,m;
    string a,b,q,t;
    cin>>n>>m;
    while(m--){
        cin>>a>>b;
        dict[a] = b;
    }

    while(n--){
        cin>>q;
        t = dict[q];
        if(t.size()<q.size())
            cout<<t<<" ";
        else
            cout<<q<<" ";

    }
    cout<<endl;

}
