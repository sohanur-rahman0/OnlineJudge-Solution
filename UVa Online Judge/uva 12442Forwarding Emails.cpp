#include<bits/stdc++.h>
using namespace std;
vector<bool>visited;
vector<int>len,adj;
int dfs(int u)
{
    visited[u] = true;
    int c=0;
    if(adj[u]!=-1 && !visited[adj[u]])
        c+= 1+dfs(adj[u]);
    visited[u] = false;
    return len[u] = c;

}
int main()
{
    int tc,c=0;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;

        adj.assign(n,-1);
        visited.assign(n,false);
        len.assign(n,-1);


        for(int i=0; i<n; i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u-1] = v-1;
        }
        int ans=0,max_len = 0;
        for(int i=0; i<n; i++)
        {
            if(len[i]==-1)
                dfs(i);
            if(len[i]>max_len)
            {
                max_len = len[i];
                ans = i;
            }
        }
        cout<<"Case "<<++c<<": "<<ans+1<<endl;
    }
}
