#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    bool flag = false;
    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0; i<n-2; i++)
    {
        if(arr[i]+arr[i+1] > arr[i+2])
        {
            cout<<"YES"<<endl;
            flag = true;
            break;
        }
    }
    if(!flag)
        cout<<"NO"<<endl;
}
