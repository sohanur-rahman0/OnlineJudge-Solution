#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n;
    cin>>tc;
    while(tc--){
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];

        if(n==1)cout<<arr[0]<<endl;
        else{

        sort(arr,arr+n,greater<int>());
        for(int i=0; i<n; i++)cout<<arr[i]<<" ";

        cout<<endl;
        }
    }
}
