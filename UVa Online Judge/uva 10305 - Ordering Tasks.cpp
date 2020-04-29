#include<bits/stdc++.h> ///Topological Sort ///did not solve yet
using namespace std;

stack<int>st;
void dfs(int v, vector<vector<int>>&graph,vector<bool>&visited)
{
    visited[v] = true;
    vector<int>::iterator i;
    for(i = graph[v].begin(); i!=graph[v].end(); i++)
        if(!visited[*i])
            dfs(*i,graph,visited);

    st.push(v);
}

int main()
{
    int n,m,u,v;
    while(cin>>n>>m)
    {
        vector<vector<int>>graph(n+1);
        vector<bool>visited(n+1,false);
        for(int i=0; i<m; i++)
        {
            cin>>u>>v;
            graph[u].push_back(v);
        }
//        for(int i=0; i<graph.size(); i++){
//            cout<<i<<"-->";
//            for(int t:graph[i])cout<<t<<" ";
//            cout<<endl;
//        }
        for(int i=1; i<=n; i++)
        {
            if(visited[i]==false)
                dfs(i,graph,visited);
        }
        while(!st.empty())
        {
            cout<<st.top()<<' ';
            st.pop();
        }
        cout<<endl;
    }
}
