#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    int n;
    while(cin>>n,n)
    {
        queue<int>q;
        vector<int>store;
        for(int i=1; i<=n; i++)
        {
            q.push(i);
        }

        while(q.size()!=1)
        {
            int t = q.front();
            store.push_back(t);
            q.pop();
            t = q.front();
            q.push(t);
            q.pop();
        }
        cout<<"Discarded cards: "<<store[0];
        for(int i=1; i<store.size(); i++)
        {
            cout<<", "<<store[i];
        }
        cout<<endl;
        cout<<"Remaining card: "<<q.front()<<endl;
    }
}
