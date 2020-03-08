#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
void dfs(vector<bool>&visited,set<int>&component,vector<set<int>>&adjList,int j)
{
    visited[j] = true;
    component.insert(j);
    for(auto v:adjList[j])
    {
        if(!visited[v])
            dfs(visited,component,adjList,v);
    }

}
int main()
{
    int tc,v,e,c=0;
    cin>>tc;
    while(tc--)
    {
        cin>>v>>e;
        vector<set<int>>adjList(v);
        vector<bool>visited(v,0);
        char a,b;
        int m,n;
        for(int i=0; i<e; i++)
        {
            cin>>a>>b;
            m = (int)a - 'a';
            n = (int)b - 'a';
            adjList[m].insert(n);
            adjList[n].insert(m);
        }
//        for(int i=0; i<adjList.size(); i++){
//            cout<<i<<"-->";
//            for(int t:adjList[i])cout<<t<<" ";
//            cout<<endl;
//        }
        int count = 0;
        cout<<"Case #"<<++c<<":"<<endl;
        for(int i=0; i<adjList.size(); i++)
        {
            if(!visited[i])
            {
                count++;
                set<int>component;
                dfs(visited,component,adjList,i);
                for(int ch:component)
                {
                    cout<<(char)(ch+'a')<<',';
                }
                cout<<endl;
            }
        }
        cout<<count<<" connected components"<<endl<<endl;
    }


}
