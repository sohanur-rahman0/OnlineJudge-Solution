//not solved
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<char> vc;
typedef map<string, string> dict;
typedef pair<int, int> pii;
typedef priority_queue<int, vector<int>, greater<int>> pq;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t,a,b;
    cin>>t;
    while(t--) {
        cin>>a>>b;
        int x=0;
        vi v;
        for(int i=0; i<a; i++) {
            if(i==a)continue;
            x^= i;
            v.pb(i);
        }
        cout<<"-->"<<v.size()<<endl;

        if(x==b) {
            cout<<v.size()<<endl;
            cout<<"->"<<v.size()<<endl;
        } else {
            cout<<"---->"<<v.size()<<" "<<x<<endl;
            if(x==0) {
                cout<<v.size()+1<<endl;
                continue;
            }
            int k = a+1;
            while((x^=k) != b) {
                v.pb(k);
                k++;
            }
            cout<<"----->"<<v.size()<<endl;

        }
        cout<<v.size()+1<<endl;
        v.clear();
    }
}