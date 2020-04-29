#include<bits/stdc++.h>
using namespace std;
stack<int>st;
bool flag = false;
void dfs(int u,vector<vector<int>>&graph, vector<bool>&v)
{
    v[u] = true;
    for(auto i:graph[u])
        if(!v[i])
            dfs(i,graph,v);
        else{
            flag = true;
        }
    st.push(u);
}

int main()
{
    int n,m;
    while(cin>>n>>m,n,m)
    {
        int a,b;
        vector<vector<int>>graph(n+1);
        vector<bool>v(n+1,false);
        for(int i=0; i<m; i++)
        {
            cin>>a>>b;
            graph[a].push_back(b);
        }
        flag = false;
        for(int i=1; i<=n; i++)
        {
            if(!v[i])
                dfs(i,graph,v);
        }
        if(flag)
        {
            cout<<"IMPOSSIBLE"<<endl;
            while(!st.empty())st.pop();

        }
        else
        {
            while(!st.empty())
            {
                cout<<st.top()<<endl;
                st.pop();
            }

        }
    }
}
