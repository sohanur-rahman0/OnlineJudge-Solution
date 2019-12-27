#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    long arr[3];
    cin>>t;
    while(t--)
    {
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr,arr+3);
        long large = arr[2];
        long small1 = arr[1];
        long small2 = arr[0];

        if(large > (small1+small2+1)){
            cout<<"No"<<endl;
        }else
            cout<<"Yes"<<endl;
    }
}
