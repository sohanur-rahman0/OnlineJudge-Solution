#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long arr[10000];
    long long n,i=0;
    while(cin>>n){
        arr[i] = n;
        sort(arr,arr+i+1);

        if(i%2==0){
            cout<<arr[i/2]<<endl;
        }else{
            cout<<(arr[i/2]+arr[(i/2)+1])/2<<endl;
        }
        i++;
    }
}
