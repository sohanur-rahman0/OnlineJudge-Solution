#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>store;
    int n,q,i=1;

    while(cin>>n>>q,n,q){

    while(n--){
        int t;
        cin>>t;
        store.push_back(t);
    }
    sort(store.begin(),store.end());

    cout<<"CASE# "<<i++<<":\n";
    while(q--){
            int query;
            cin>>query;

       bool flag = binary_search(store.begin(),store.end(),query);

       if(flag){
        auto itr = find(store.begin(),store.end(),query);
        int index = distance(store.begin(),itr)+1;

        cout<<query<<" found at "<<index<<endl;
       }else{
           cout<<query<<" not found\n";
       }
    }
    store.clear();
    }
}
