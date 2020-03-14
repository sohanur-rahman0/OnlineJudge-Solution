#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        ll arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];

        sort(arr,arr+n);
        ll c=0;

        for(ll i=0; i<n-1; i++)
        {
            if(arr[i]!=arr[i+1])c++;
        }
        cout<<c+1<<endl;
    }
}
