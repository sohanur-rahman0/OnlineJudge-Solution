#include<bits/stdc++.h>
using namespace std;

void bfs(vector<int>adj[], int start,bool visited[],int lavel[])
{
	queue<int>q;
	q.push(start);
	lavel[start] = 0;
	visited[start] = true;

	while(!q.empty()){
		int x = q.front();
		q.pop();

		for (auto it:adj[x]){
			if(!visited[it]){
				lavel[it] = lavel[x] + 1;
				q.push(it);
				visited[it] = true;
			}
		}

	}

}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int node;
    cin>>node;

    vector<int>adj[node+1];
    bool visited[node+1] = {false};
    int lavel[node+1]= {0};
    int t = node;
    int u,k,v;

    while(node--){
    	cin>>u>>k;
    	while(k--){
    		cin>>v;
    		adj[u].push_back(v);
    	}
    }

    // for (int i = 0; i <5; ++i)
    // {
    // 	cout<< i <<" -->";
    // 	for (int t:adj[i]){
    // 		cout<<t<<" ";
    // 	}
    // 	cout<<endl;
    // }

    bfs(adj,1,visited,lavel);

    for (int i = 1; i < t+1; ++i)
    {
    	if(i==1){
    		cout<<i<<" "<<lavel[i]<<endl;
    	}else if(lavel[i]==0){
    		cout<<i<<" "<<"-1"<<endl;
    	}else {
    		cout<<i<<" "<<lavel[i]<<endl;
    	}
    	
    }

}