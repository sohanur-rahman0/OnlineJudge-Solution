#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int tc,n;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];

        sort(arr,arr+n);
        cout<<(arr[n-1]-arr[0])*2<<endl;
    }
}
