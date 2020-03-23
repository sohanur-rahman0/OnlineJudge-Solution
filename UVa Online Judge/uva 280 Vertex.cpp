#include<bits/stdc++.h>
using namespace std;
void dfs(int start,vector<int>*adjList,vector<bool>&visited)
{
    for(auto i:adjList[start])
    {
        if(!visited[i])
        {
            visited[i] = true;
            dfs(i,adjList,visited);
        }
    }
}
int main()
{
    int node;
    while(cin>>node,node)
    {
        if(!node)
            break;
        vector<int>adjList[node];
        int n,nn;
        while(cin>>n)
        {
            if(!n)
                break;
            while(cin>>nn)
            {
                if(!nn)
                    break;
                adjList[n-1].push_back(nn-1);
            }
        }
        int q;
        cin>>q;
        while(q--)
        {
            vector<bool>visited(node,false);
            int start;
            cin>>start;
            dfs(start-1,adjList,visited);
            int count = 0;
            vector<int>ans;
            for(int i=0; i<visited.size(); i++)
            {
                if(!visited[i])
                {
                    count++;
                    ans.push_back(i+1);
                }
            }
            if(count==0)
            {
                cout<<"0"<<endl;
            }
            else
            {
                cout<<count<<" "<<ans[0];
                for(int i=1; i<ans.size(); i++)
                {
                    cout<<" "<<ans[i];
                }
                cout<<endl;
            }
        }
    }
}
