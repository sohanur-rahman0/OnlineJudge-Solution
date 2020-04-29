#include<bits/stdc++.h>///topological sort using kahns algorithm
using namespace std;
vector<int>ans;
void topologicalSort(vector<vector<int>>&graph,int n)
{
    vector<int>in_degree(n,0);
    //vector<bool>used(n,false);
    for(int i=0; i<n; i++)
    {
        auto itr = graph[i].begin();
        for(; itr != graph[i].end(); itr++)
        {
            in_degree[*itr]++;
        }
    }

    priority_queue<int, vector<int>, greater<int>> q;
    for(int i=0; i<n; i++)
    {
        if(in_degree[i]==0)
        {
            q.push(i);
        }
    }
    while(!q.empty())
    {
        int u = q.top();
        q.pop();

        ans.push_back(u);
        for(auto it:graph[u])
        {
            if(--in_degree[it]==0)
                q.push(it);
        }

    }

}

int main()
{
    int n,m,co=0;
    while(cin>>n)
    {
        map<string,int>mp;
        map<int,string>mp2;

        string a;
        int c = 0;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            mp[a] = c;
            mp2[c] = a;
            c++;
        }
        vector<vector<int>>graph(n);

        int m;
        cin>>m;
        string b;
        int u,v;
        for(int i=0; i<m; i++)
        {
            cin>>a>>b;
            u = mp[a];
            v = mp[b];
            graph[u].push_back(v);
        }
        topologicalSort(graph,n);

        cout<<"Case #"<<++co<<": Dilbert should drink beverages in this order: ";
        cout<<mp2[ans.front()];
        ans.erase(ans.begin());
        while(!ans.empty())
        {
            cout<<" "<<mp2[ans.front()];
            ans.erase(ans.begin());
        }
        cout<<"."<<endl<<endl;
        ans.clear();

    }
}
