#include<iostream>
using namespace std;
int main()
{
    int tc,n,i,arr[2000]={0};
    cin>>tc;
    for(i = 0; i<tc; i++){
        cin>>n;
        arr[n]++;
    }
    for(i=0; i<2000; i++){
        if(arr[i]>0)
            cout<<i<<" aparece "<<arr[i]<<" vez(es)"<<endl;
    }
    return 0;
}
