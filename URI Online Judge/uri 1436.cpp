#include<iostream>

using namespace std;

int main()
{
    int tc,c=1,n;
    cin>>tc;
    while(tc--)
    {
        int arr[12];
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        cout<<"Case "<<c++<<": "<<arr[n/2]<<endl;
    }
    return 0;
}
