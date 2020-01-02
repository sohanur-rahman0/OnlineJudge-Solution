#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,tc,k1,k2,m,m2;
    cin>>tc;
    while(tc--){
    cin>>n>>k1>>k2;

    int arr[k1],arr2[k2];
    for(int i=0; i<k1; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+k1);
    m = arr[k1-1];
    for(int i=0; i<k2; i++)
    {
        cin>>arr2[i];
    }
    sort(arr2,arr2+k2);
    m2 = arr2[k2-1];
    if(m>m2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
}
