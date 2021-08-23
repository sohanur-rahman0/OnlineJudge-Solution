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

bool isOutOfOrder(int i, int n, vi &arr) {
    if(i==0) {
        return n > arr[i+1];
    } else if (i==arr.size()- 1) {
        return n < arr[i-1];
    } else {
        return (arr[i-1] > n || n < arr[i+1]);
    }
}

vi subArraySort(vi &arr) {
    int l = arr.size();
    int minimum = INT_MAX;
    int maximum = INT_MIN;
    for(int i=0; i<l; i++) {
        if (isOutOfOrder(i, arr[i], arr)) {
            minimum = min(minimum, arr[i]);
            maximum = max(maximum, arr[i]);
        }
    }
    vi ans;
    if(minimum == INT_MAX) {
        ans.pb(-1);
        ans.pb(-1);
        return ans;
    }

    int left = 0, right = l - 1;

    // cout<<minimum<<" "<<maximum<<endl;

    while (minimum >= arr[left]) {
        left++;
    }

    while (maximum <= arr[right]) {
        right--;
    }

    ans.pb(left+1);
    ans.pb(right-1);
    return ans;


}



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
    vi arr;
    for(int i=0; i<n; i++) {
        cin>>t;
        arr.pb(t);
    }

    vi ans = subArraySort(arr);
    cout<<ans[0]<<" "<<ans[1]<<endl;

}