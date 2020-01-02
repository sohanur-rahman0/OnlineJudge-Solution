#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    cin>>n;
    long int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    sort(arr,arr+n);
    cout<<arr[n-1]<<endl;
    return 0;
}
