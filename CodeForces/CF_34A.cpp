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
    int n,t;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int m = 2000, a,b;
    for(int i=0; i<n-1; i++) {
        if(abs(arr[i] - arr[i+1]) < m) {
            a = i+1;
            b = i+2;
            m = abs(arr[i] - arr[i+1]);
        }
    }

    if(abs(arr[0] - arr[n-1]) < m) {
        a = 1;
        b = n;
    }

    cout<<a<<" "<<b<<endl;

}