#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0; i<n; i++){
        if(arr[n-1]==arr[i])
            c++;
    }
    cout<<c<<endl;
}
