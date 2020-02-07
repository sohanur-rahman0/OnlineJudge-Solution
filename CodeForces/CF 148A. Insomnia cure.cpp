#include<bits/stdc++.h>
using namespace std;
int arr[1000000] = {0};
int main()
{
    int k,l,m,n,d,c=0;
    cin>>k>>l>>m>>n>>d;
    if(k==1||l==1||m==1||n==1)
        cout<<d<<endl;
    else{
            int i=0;
    while(true){
        i+=k;
        arr[i] = 1;
        if(i>d)break;
    }
        i=0;
    while(true){
        i+=l;
        arr[i] = 1;
        if(i>d)break;
    }
         i=0;
    while(true){
        i+=m;
        arr[i] = 1;
        if(i>d)break;
    }
        i=0;
    while(true){
        i+=n;
        arr[i] = 1;
        if(i>d)break;
    }


    for(int i=1; i<=d; i++){
        //cout<<i<<" "<<arr[i]<<endl;
        if(arr[i]==1)c++;
    }
    cout<<c<<endl;

    }

}
