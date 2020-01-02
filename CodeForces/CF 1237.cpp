#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j,count=0,l,c=0,d;
    cin>>n;
    int arr[n];
    int out[n];
    l=n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        cin>>out[j];
    }
    int rev[n];
    for(c=l-1,d = 0; c>=0; c--,d++){
    rev[d] = out[c];
    }



    for(int i=0; i<n; i++)
    {
        cout<<rev[i]<<endl;
    }
    for(int i=0; i<n; i++){
        if(arr[i]!=rev[i])count++;
    }
    cout<<count<<endl;
}
