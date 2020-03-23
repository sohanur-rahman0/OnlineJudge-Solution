///for directed graph
#include<bits/stdc++.h>
using namespace std;
void PrintGraph(vector<int>*AdjList,int vertex)
{
    for(int i=0; i<vertex; i++)
    {
        cout<<i;
        vector<int>::iterator it;
        for(it=AdjList[i].begin(); it!=AdjList[i].end(); it++)
        {
            cout<<"->"<<*it;
        }
        cout<<endl;
    }
}

void dfs(vector<int>*AdjList,vector<bool>&visited,int start)
{
    cout<<start<<" ";
    visited[start] = true;
    for(auto i:AdjList[start])
    {
        if(!visited[i])
            dfs(AdjList,visited,i);
    }

}

bool isCyclicUtil(int v,vector<bool>&visited, vector<bool>&recStack,vector<int>*AdjList)
{
    if(!visited[v])
    {
        visited[v] = true;
        recStack[v] = true;

        for(auto i:AdjList[v]){
            if(!visited[i] && isCyclicUtil(i,visited,recStack,AdjList))
               return true;
               else if(recStack[i])
                return true;
        }
    }
    recStack[v] = false;
    return false;
}

bool isCyclic(int vertex,vector<bool>&visited,vector<bool>&recStack,vector<int>*AdjList){
    for(int i=0; i<vertex; i++)
    {
        if(isCyclicUtil(i,visited,recStack,AdjList))
            return true;
    }
    return false;
}
int main()
{
    int vertex,edge;
    cin>>vertex>>edge;
    vector<int>AdjList[vertex];
    vector<bool>visited(vertex,false);
    for(int i=0; i<edge; i++)
    {
        int u,v;
        cin>>u>>v;
        AdjList[u].push_back(v);
    }
    PrintGraph(AdjList,vertex);
    //dfs(AdjList,visited,0);
    cout<<endl;
    vector<bool>recStack(vertex,false);
    cout<<"Finding Cycle"<<endl;
     if(isCyclic(vertex,visited,recStack,AdjList))
        cout << "Graph contains cycle";
    else
        cout << "Graph doesn't contain cycle";

}
