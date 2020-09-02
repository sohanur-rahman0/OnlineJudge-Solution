#include<bits/stdc++.h>
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int node;
    cin>>node;

    vector<int>adj[node+1];
    int mat[node+1][node+1];
    int t = node;
    int u,k,v;
    memset(mat,0,sizeof(mat));

    while(node--){
    	cin>>u>>k;
    	while(k--){
    		cin>>v;
    		adj[u].push_back(v);
    		mat[u][v] = 1;
    	}
    }


    for (int i = 1; i <= t; ++i)
    {
    	for(int j=1; j<t; j++){
    		cout<<mat[i][j]<<" ";
    	}
    	cout<<mat[i][t];
    	cout<<endl;
    }




}