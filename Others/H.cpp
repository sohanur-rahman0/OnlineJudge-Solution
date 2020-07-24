#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int tc,n,k,i;
    cin>>tc;
    while(tc--){
        cin>>n>>k;
        int arr[n];
        for(i=0; i<n; i++)
            cin>>arr[i];

        sort(arr,arr+n);
        cout<<arr[k+1]<<endl;
    }
    return 0;
}

