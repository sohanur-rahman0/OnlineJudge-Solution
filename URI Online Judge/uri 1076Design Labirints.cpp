#include<bits/stdc++.h>
using namespace std;

int  visited[60];

//int c=0;
int G[60][60];

int  DFS(int n,int x)
{
    int c=0;
    if(visited[n]==0){
    visited[n] = 1;
    for(int i=0; i<x; i++)
    {
        if(G[n][i]==1 && visited[i]==0)
        {
            c+= DFS(i,x)+1;
        }
    }
    }
    return c;


}
int main()
{
    int tc,n,v,a,x,y;
    cin>>tc;
    while(tc--)
    {
        cin>>n>>v>>a;
        // c=0;
        //vector<vector<int>>G(v,vector<int> (v, 0));
        for (int i=0; i<v; i++)
        {
            for(int j=0; j<v; j++)
            {
                G[i][j]=0;
            }
            visited[i]=0;
        }

        while(a--)
        {
            cin>>x>>y;
            G[x][y] = 1;
            G[y][x] = 1;
        }

        cout<<DFS(n,v)*2<<endl;

    }
}
