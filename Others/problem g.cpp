#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n,i,count = 0, c = 0,l;
    cin>>n;
    char arr[n];
    cin>>arr;
    l =strlen(arr);
    for(i=0; i<l; i++){
        if(arr[i]=='U'){count++;}
        else if(arr[i]=='D'){count++;}
        if(count == -1){c++;}
    }
    cout<<c<<endl;
}
