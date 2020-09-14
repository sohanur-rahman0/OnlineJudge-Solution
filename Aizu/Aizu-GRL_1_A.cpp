#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define dd double
#define pb push_back
#define mp make_pair
#define endl '\n'
#define pi acos(-1.0)
#define all(v) v.begin(),v.end()
#define rall(v) v.rend(),v.rend()
#define contains(a,b) (find(a.begin(),a.end(),b!=a.end()))
#define minimum(a) *min_element(a.begin(),a.end())
#define maximum(a) *max_element(a.begin(),a.end())
#define precision(n) cout<<fixed<<setprecision(n)
#define toUpper(str) transform(str.begin(),str.end(),str.begin(),::toupper);
#define toLower(str) transform(str.begin(),str.end(),str.begin(),::tolower);


template < class T > T gcd( T a, T b ) { if (b == 0)return a; return gcd(b, a % b);}
template < class T > T lcm( T a, T b ) { return (b / gcd(a, b)) * a;}
template < class T > T toInt( T n) { int v; stringstream stream; stream << n; stream >> v; return v;}
template < class T > T toStr( T str) { stringstream stream; stream << str; return stream.str();}


typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<char> vc;
typedef map<string, string> dic;
typedef pair<int, int> pii;
typedef stringstream ss;
typedef priority_queue<int, vector<int>, greater<int>> pq;

void dijkstra(int source,int cost[],int parent[], vector<pii>*adj)
{
	priority_queue<pii, vector<pii>, greater<pii>>q;

	cost[source] = 0;
	parent[source] = source;
	q.push(mp(cost[source], source));

	while(!q.empty())
	{
		int parent_node = q.top().second;
		q.pop();

		for(auto it: adj[parent_node])
		{
			int current_node = it.first;
			int current_cost = it.second;

			if(cost[parent_node] + current_cost < cost[current_node])
			{
				parent[current_node] = parent_node;
				cost[current_node] = cost[parent_node] + current_cost;
				q.push(mp(cost[current_node], current_node));
			}
		}
	}

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int node,edge,start;
    cin>>node>>edge>>start;

    int parent[node+1];
    int cost[node+1];

  	vector<pii>adj[node+1];

  	int source, dest, cos;
  	for (int i = 0; i < edge; ++i)
  	{
  		cin>>source>>dest>>cos;
  		adj[source].pb(mp(dest,cos));
  	}

  	for (int i = 0; i < node + 1; ++i)
    {
    	cost[i] = INT_MAX;
    }

  	dijkstra(start,cost,parent,adj);

  	for (int i = 0; i < node; i++)
        {
            if(cost[i]==INT_MAX){
                cout<<"INF"<<endl;
                continue;
            }
            cout<<cost[i]<<endl;
        }

}