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
    int t,n;
    cin>>t;
    string str;
    while(t--) {
        cin>>n>>str;
        for(int i=0; i<n; i++) {
            if(str[i]=='U') {
                cout<<'D';
            } else if(str[i]=='D') {
                cout<<'U';
            } else {
                cout<<str[i];
            }
        }
        cout<<endl;

    }

}