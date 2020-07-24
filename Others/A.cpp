#include<bits/stdc++.h>
using namespace std;
bool areEqual(long long int arr1[],long long int arr2[],long long int n,long long int m)
{

    if (n != m)
        return false;


    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);


    for (int i = 0; i < n; i++)
        if (arr1[i] != arr2[i])
            return false;


    return true;
}
int main()
{
    long long int tc,n,i,check,c=1,x,y;
    cin>>tc;
    while(tc--){

        cin>>n;
        long long int arr[n],arr2[n];
        for(i=0; i<n; i++){
            cin>>arr[i];
        }
        for(i=0; i<n;i++){
            cin>>arr2[i];
        }
        x = sizeof(arr)/sizeof(long long int);
        y = sizeof(arr2)/sizeof(long long int);

        if(areEqual(arr,arr2,x,y))
            cout<<"Case "<<c++<<": YES"<<endl;
        else
            cout<<"Case "<<c++<<": NO"<<endl;
    }

return 0;
}
