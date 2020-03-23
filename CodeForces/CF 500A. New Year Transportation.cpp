#include<bits/stdc++.h>
using namespace std;
void dfs(vector<int>*adjList,vector<bool>&visited,int start)
{
    visited[start] = true;
    for(auto i:adjList[start]){
        if(!visited[i])
            dfs(adjList,visited,i);
    }

}

int main()
{
    int n,t;
    cin>>n>>t;
    vector<int>adjList[n];
    vector<bool>visited(n,false);
    for(int i=1; i<n; i++)
    {
        int a;
        cin>>a;
        adjList[i-1].push_back(i+a-1);
    }

    dfs(adjList,visited,0);

    if(visited[t-1])
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
