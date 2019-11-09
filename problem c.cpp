#include<iostream>
using namespace std;
int main()
{
    int i,n,count=0;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    i=0;
    while(100)
    {
        if(i+2<n && arr[i+2]==0)
        {
            i+=2;
        }
        else if(i+1<n)
        {
            i++;
        }
        else
        {
            break;
        }
        count++;
    }
    cout<<count<<endl;
}
