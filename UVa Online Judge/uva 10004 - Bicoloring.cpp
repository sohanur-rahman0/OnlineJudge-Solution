#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>>adjList;
    int n;
    while(cin>>n,n)
    {
        adjList.assign(n,vector<int>());
        int l;
        cin>>l;
        while(l--)
        {
            int x,y;
            cin>>x>>y;
            adjList[x].push_back(y);
            adjList[y].push_back(x);
        }
        queue<int>q;
        q.push(0);
        vector<int>color(n,1e9);
        color[0] = 0;

        bool isBipartite = true;
        while(!q.empty() && isBipartite)
        {
            int u = q.front();
            q.pop();
            for(int i=0; i<(int)adjList[u].size(); i++)
            {
                int v = adjList[u][i];
                if(color[v]==1e9)
                {
                    color[v] = 1-color[u];
                    q.push(v);
                }
                else if(color[v]==color[u])
                {
                    isBipartite = false;
                    break;
                }
            }

        }
        if(isBipartite)
        {
            cout<<"BICOLORABLE."<<endl;
        }
        else
        {
            cout<<"NOT BICOLORABLE."<<endl;
        }
    }
}
