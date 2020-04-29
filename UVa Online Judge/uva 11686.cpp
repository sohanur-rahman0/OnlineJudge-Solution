#include<bits/stdc++.h>
using namespace std;
stack<int>st;
bool flag = false;
void dfs(int u,vector<vector<int>>&graph, vector<int>&v)
{
    v[u] = 1;
    for(auto i:graph[u])
        if(!v[i])
            dfs(i,graph,v);
        else if(v[i]==1){
            flag = false;
        }
    v[u]=2;
    st.push(u);
}

int main()
{
    int n,m;
    //freopen("output.txt","w",stdout);
    while(cin>>n>>m,n,m)
    {
        int a,b;
        vector<vector<int>>graph(n+1);
        vector<int>v(n+1,0);
        for(int i=0; i<m; i++)
        {
            cin>>a>>b;
            graph[a].push_back(b);
        }
        flag = true;
        for(int i=1; i<=n; i++)
        {
            if(!v[i])
                dfs(i,graph,v);
        }
        if(!flag)
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
