#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int s=0;
    int c=0;

    for(int i=0; i<n; i++){
        if(arr[i]>0)
            s+=arr[i];
        else if(arr[i]==-1 && s!=0){
            s--;
        }
        else
            c++;
    }
    cout<<c;
}
