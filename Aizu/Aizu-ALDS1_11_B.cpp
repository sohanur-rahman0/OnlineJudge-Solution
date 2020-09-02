#include<bits/stdc++.h>
using namespace std;

int timeCounter = 1;

void dfs(int visited[], vector<vector<int>>&adj,int start, int startTime[], int endTime[]){

	visited[start] = true;
	startTime[start] = timeCounter++;
	for(auto v:adj[start]){
		if(!visited[v]){
			dfs(visited,adj,v,startTime, endTime);
		}
	}
	endTime[start] = timeCounter++;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int node;
    cin>>node;

    vector<vector<int>>adj(node+1);
    int visited[node+1] = {false};
    int startTime[node+1];
    int endTime[node+1];
    int t = node;

    int u,k,v;

    while(node--){
    	cin>>u>>k;

    	while(k--){
    		cin>>v;
    		adj[u].push_back(v);
    	}
    }

    // for (int i = 0; i < adj.size(); ++i)
    // {
    // 	cout<< i <<" -->";
    // 	for (int t:adj[i]){
    // 		cout<<t<<" ";
    // 	}
    // 	cout<<endl;
    // }

    int len = adj.size();

    for(int i=0; i<len; i++){
    	if(!visited[i]){
    		dfs(visited,adj,i,startTime,endTime);
    	}
    }

    for(int i=1; i<t + 1; i++){
    	cout<<i<<" "<<startTime[i]-2<<" "<<endTime[i]-2<<endl;
    }

}