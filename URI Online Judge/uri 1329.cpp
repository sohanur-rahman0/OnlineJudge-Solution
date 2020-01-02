#include<iostream>
using namespace std;
int main()
{
    int tc,mc,jc,i;
    while(1){
            mc=0;
    jc=0;
        cin>>tc;
        if(tc==0)break;
        int arr[tc];
        for(i=0; i<tc; i++){
            cin>>arr[i];
            if(arr[i]==0)mc++;
            else jc++;
        }
        cout<<"Mary won "<<mc<<" times and John won "<<jc<<" times"<<endl;
    }
    return 0;
}
