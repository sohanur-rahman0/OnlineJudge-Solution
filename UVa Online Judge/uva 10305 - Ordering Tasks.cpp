#include<bits/stdc++.h> ///Topological Sort  ///did not solve yet
using namespace std;
vector<int>ans;
vector<vector<int>>Graph;
vector<int>Indegree;


int main()
{
    int n,m;
    while(cin>>n>>m,n,m){
        ans.clear();
        Graph.clear();
        Indegree.clear();
        Graph.resize(n+1);
        Indegree.assign(n+1,0);
        queue<int>q;
        int l = m;
        int u,v;
        while(l--){
            cin>>u>>v;
            Graph[u].push_back(v);
            Indegree[v]++;
        }
        for(int i=1; i<=n; i++){
            if(Indegree[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            u = q.front();
            q.pop();
            ans.push_back(u);
            Indegree[u]--;
            for(int i=0; i<Graph[u].size(); i++)
            {
                v = Graph[u][i];
                Indegree[v]--;
                if(Indegree[v]==0)q.push(v);
            }
        }

        for(int i=0; i<n; i++){
                if(i)cout<<' ';
            cout<<ans[i];

        }
        cout<<endl;

    }

}
