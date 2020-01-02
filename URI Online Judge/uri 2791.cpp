#include<iostream>
using namespace std;
int main()
{
    int arr[4];
    for(int i=0; i<4; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<4; i++)
    {
        if(arr[i]!=0){
            cout<<i+1<<endl;
            return 0;
        }
    }
}
