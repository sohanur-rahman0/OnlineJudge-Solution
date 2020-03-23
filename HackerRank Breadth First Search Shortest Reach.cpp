#include<bits/stdc++.h>
using namespace std;
void bfs(vector<int>*adjList,vector<bool>&visited,int start,vector<int>&ans)
{
    queue<int>q;
    visited[start] = true;
    q.push(start);
    ans[start] = 0;
    while(!q.empty())
    {
        int u = q.front();
        //q.pop();
        for(auto i:adjList[u])
        {
            if(!visited[i])
            {
                visited[i] = true;
                q.push(i);
                ans[i] += ans[u]+6;
            }
        }
        q.pop();

    }

}

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,m;
        cin>>n>>m;
        vector<int>adjList[n+1];
        vector<bool>visited(n,false);
        vector<int>ans(n+1,0);
        for(int i=1; i<=m; i++)
        {
            int u,v;
            cin>>u>>v;
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
        int start;
        cin>>start;
        bfs(adjList,visited,start,ans);
//        for(auto i:ans)
//            cout<<i<<" ";
        for(int i=1; i<=n; i++)
        {
            if(i!=start)
            {
                if(ans[i]==0)
                {
                    cout<<"-1 ";
                }
                else
                {
                    cout<<ans[i]<<" ";
                }
            }
        }
        cout<<endl;

    }

}

