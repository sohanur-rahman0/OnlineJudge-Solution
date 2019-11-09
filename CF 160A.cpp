#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    int avg = sum/2;
    sort(arr,arr+n,greater<int>());
    int s=0,count=0;
    for(int i=0; i<n; i++)
    {
        s+=arr[i];
        count++;

        if(s>avg)
            break;
    }
    cout<<count;

}
