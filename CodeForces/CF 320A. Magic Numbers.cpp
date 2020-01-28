#include<bits/stdc++.h>///did not solved
using namespace std;
int main()
{
    string arr;
    cin>>arr;
    bool flag = false;
    for(int i=0; arr[i]; i++){
        if(arr[i]=='1' || (arr[i]=='1' && arr[i+1]=='4') || (arr[i]=='1' && arr[i+1]=='4' && arr[i+2]=='4')){
           flag = true;
           }else{
               flag = false;
               break;
           }
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
