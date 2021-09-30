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
int maxSubsetSumNoAdjacent(int arr[], int l) {
    if(l==1)return arr[0];
    int second = arr[0];
    int first = max(arr[0], arr[1]);
    int current;
    for(int i=2; i<l; i++) {
        current = max(first, second + arr[i]);
        second = first;
        first = current;
    }
    return first;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    cout<<maxSubsetSumNoAdjacent(arr, n)<<endl;
}