#include<bits/stdc++.h>
using namespace std;
int unit[1001];
int sum,last;
bool comp(int a,int b){
    return unit[a]>unit[b];
}
void dfs(vector<int>*List,int u){
    if(List[u].size()==0){
        last = u;
        return;
    }
    sum+= unit[List[u][0]];
    dfs(List,List[u][0]);
}

int main()
{
    int tc,c=0;
    cin>>tc;
    cin.ignore();
    while(tc--)
    {
        int n,m;
        cin>>n>>m;

        vector<int>List[n];
        for(int i=0; i<n; i++){
            cin>>unit[i];
        }
        for(int i=0; i<m; i++)
        {
            int u,v;
            cin>>u>>v;
            List[u].push_back(v);
        }
        for(int i=0; i<n; i++)
        {
            sort(List[i].begin(),List[i].end(),comp);
        }
        sum = 0;
        dfs(List,0);
        cout<<"Case "<<++c<<": "<<sum<<" "<<last<<endl;
        unit[1001] = {0};

    }
}
