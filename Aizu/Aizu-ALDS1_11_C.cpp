#include<bits/stdc++.h>
using namespace std;

void bfs(vector<int>adj[], int s,bool vis[],int lvl[])
{
	queue<int>q;
	q.push(s);
	lvl[s] = 0;
	vis[s] = true;

	while(!q.empty()){
		int x = q.front();
		q.pop();

		for (auto i:adj[x]){
			if(!vis[i]){
				lvl[i] = lvl[x] + 1;
				q.push(i);
				vis[i] = true;
			}
		}

	}

}


int main()
{
    
    int n;
    cin>>n;

    vector<int>adj[n+1];
    bool vis[n+1] = {false};
    int lvl[n+1]= {0};
    int t = n;
    int u,k,v;

    while(n--){
    	cin>>u>>k;
    	while(k--){
    		cin>>v;
    		adj[u].push_back(v);
    	}
    }


    bfs(adj,1,vis,lvl);

    for (int i = 1; i < t+1; ++i)
    {
    	if(i==1){
    		cout<<i<<" "<<lvl[i]<<endl;
    	}else if(lvl[i]==0){
    		cout<<i<<" "<<"-1"<<endl;
    	}else {
    		cout<<i<<" "<<lvl[i]<<endl;
    	}
    	
    }

}