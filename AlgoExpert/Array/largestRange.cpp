#include<bits/stdc++.h>
using namespace std;

#define pb push_back

typedef vector<int> vi;

vi largestRange(vi & nums) {

    map<int,bool>d;
    for(int i=0; i<nums.size(); i++) {
        d.insert({nums[i], true});
    }

    int mlen = 0, left = 0, right = 0, clen = 0;
    vi range(2);

    for(int i=0; i<nums.size(); i++) {
        if(d[nums[i]]==true) {
            int left = nums[i];
            clen = 0;
            while(d[left]) {
                d[left]=false;
                left--;
                clen++;
            }

            right = nums[i] + 1;

            while(d[right]) {
                d[right]=false;
                right++;
                clen++;
            }
            if(clen > mlen) {
                // cout<<mlen<<" "<<clen<<endl;
                mlen = clen;
                range[0] = left + 1;
                range[1] = right -1;
            }
        } else {
            continue;
        }
    }

    return range;
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
    vi v;
    for(int i=0; i<n; i++) {
        cin>>t;
        v.pb(t);
    }

    vi ans = largestRange(v);
    cout<<ans[0]<<" "<<ans[1]<<endl;
}