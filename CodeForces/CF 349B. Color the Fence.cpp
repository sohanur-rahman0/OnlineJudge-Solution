#include<bits/stdc++.h>///didnt solve yet
using namespace std;
int main()
{
    long v,arr[11];
    cin>>v;
    for(int i=1; i<10; i++){
        cin>>arr[i];
    }
    if(v==0){
        cout<<"-1"<<endl;
        return 0;
    }

    long min = arr[1],p;
    for(int i=1; i<10; i++)
    {
        if(arr[i]<=min)
        {
            min = arr[i];
            p = i;
        }
    }
    if(min<=v){
    long l = v/min;
    for(int i=1; i<=l; i++){
        cout<<p;
    }
    cout<<endl;
    }else{
        cout<<"-1"<<endl;
    }
}
