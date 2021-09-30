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
        string str;
        cin>>str;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            int countA = 0, countB = 0;
            for (int j = i; j < n; j++)
            {
                if(str[j] == 'a') {
                    countA++;
                } else {
                    countB++;
                }

                if(countA == countB) {
                    flag = true;
                    cout<<i+1<<" "<<j+1<<endl;
                    break;
                }
            }
            if(flag)break;



        }

        if(!flag) {
            cout<<"-1 -1"<<endl;
        }

    }
}