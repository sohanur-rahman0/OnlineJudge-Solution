#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,k;
    cin>>tc;
    while(tc--){
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];

        sort(arr,arr+n,greater<int>());
        cout<<arr[k-1]<<endl;
    }
}
