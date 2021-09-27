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
    int tc;
    cin>>tc;
    while(tc--) {
        int n;
        cin>>n;
        string num = "";
        cin>>num;
        int sum = 0;
        sum += (int)num[n-1] - '0';
        for(int i=0; i<n-1; i++) {
            if(num[i]!='0') {
                sum += (int)num[i] - '0';
                sum++;
            }
        }

        cout<<sum<<endl;
    }
}