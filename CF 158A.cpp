#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,c,count=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    sort(arr,arr+n,greater<int>());
    c = arr[k-1];

    if(c==0){
        for(int i=0; i<n; i++)
        {
            if(arr[i]>c)
                count++;
        }
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            if(arr[i]>=c)
                count++;
        }

    }
    cout<<count<<endl;

    return 0;
}
