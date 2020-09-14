#include<bits/stdc++.h>
using namespace std;

class Graph
{
public:
	int node;
	vector<pair<int,pair<int,int>>>adj;
	int *dest;
	bool flag;

	Graph(int node)
	{
		this->node = node;
		this->flag = false;
		dest = new int[node + 1];

		for (int i = 0; i <= node; ++i)
		{
			dest[i] = INT_MAX;
		}
	}

	void addEdge(int src,int dest, int weight)
	{
		adj.push_back(make_pair(src,make_pair(dest,weight)));
	}

	void BellmanFord(int source)
	{
		dest[source] = 0;

		vector <pair<int,pair<int,int>>>::iterator it;

		for (int i = 0; i < node - 1; ++i)
		{
			for(it=adj.begin();it!=adj.end(); it++)
			{
				int u = it->first;
				int v = it->second.first;
				int w = it->second.second;

				if(dest[u]!= INT_MAX && dest[u] + w < dest[v])
				{
					dest[v] = dest[u] + w;
				}
			}
		}

		

		for(it=adj.begin();it!=adj.end(); it++)
			{
				int u = it->first;
				int v = it->second.first;
				int w = it->second.second;

				if(dest[u]!= INT_MAX && dest[u] + w < dest[v])
				{
					flag = true;
					break;
				}
			}

		if(!flag){
			for (int i = 0; i < node; ++i)
			{
				cout<<i<<" -> "<<dest[i]<<endl;
			}
		}else {
			cout<<"-ve cycle exist"<<endl;
		}	
	}
};


int main()
{
	int node,edge,start;
	cin>>node>>edge>>start;

	Graph graph(node);

	int s,d,c;

	for(int i=0; i<edge; i++){
		cin>>s>>d>>c;
		graph.addEdge(s,d,c);
	}

	graph.BellmanFord(start);
    

}