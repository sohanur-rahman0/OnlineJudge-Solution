#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    vector<int>arr;
    cin>>n>>m;
    int tc = n;
    while(tc--){
            int t;
            cin>>t;
            arr.push_back(t);
    }
    double ans = 0;
    int p = 0;
    for(int i=0; i<arr.size(); i++){
        if(ans<=ceil((double)arr[i]/m)){
            ans = ceil((double)arr[i]/m);
            p = i;
        }
    }
    cout<<p+1<<endl;
}
