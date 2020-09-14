#include <bits/stdc++.h>
using namespace std;


class Graph
{
public:
    int node;
    int *parent;
    list<pair<int, int>> *adj;
    int *cost;

    Graph(int node)
    {
        this->node = node;
        parent = new int[node + 1];
        adj = new list<pair<int, int>>[node + 1];
        cost = new int[node + 1];
        for (int i = 0; i <= node; i++)
            cost[i] = INT_MAX;
    }

    void addEdge(int source, int dest, int cost)
    {
        adj[source].push_back(make_pair(dest, cost));
    }

    void dijkstra(int source)
    {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q;
        cost[source] = 0;
        parent[source] = source;
        Q.push(make_pair(cost[source], source));

        list<pair<int, int>>::iterator it;

        while (!Q.empty())
        {
            int parent_node = Q.top().second;
            Q.pop();

            for (it = adj[parent_node].begin(); it != adj[parent_node].end(); it++)
            {
                int current_node = it->first;
                int current_cost = it->second;

                if (cost[parent_node] + current_cost < cost[current_node])
                {
                    parent[current_node] = parent_node;
                    cost[current_node] = cost[parent_node] + current_cost;
                    Q.push(make_pair(cost[current_node],current_node));
                }

            }
        }
    }

    void printCost()
    {
        for (int i = 0; i < node; i++)
        {
            if(cost[i]==INT_MAX){
                cout<<"INF"<<endl;
                continue;
            }
            cout<<cost[i]<<endl;
        }
    }

};

int main()
{
    

    int node, edge,start;
    cin >> node >> edge >> start;

    Graph graph(node);

    int source, dest, cost;
    for (int i = 0; i < edge; i++)
    {
        cin >> source >> dest >> cost;
        graph.addEdge(source, dest, cost);
    }

    graph.dijkstra(start);
    graph.printCost();
    

    return 0;
}
