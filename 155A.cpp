#include<iostream>
using namespace std;
int main()
{
    int n,c=0,min=0,max=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    min = arr[0];
    max = arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
            c++;
        }else if(arr[i]<min)
        {
            min = arr[i];
            c++;
        }
    }
    cout<<c<<endl;
}
