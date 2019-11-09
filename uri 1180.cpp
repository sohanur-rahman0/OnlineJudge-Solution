#include<iostream>
using namespace std;
int main()
{
    int x,i,j,m,p;
    cin>>x;
    int arr[x];
    for(i=0; i<x; i++){
        cin>>arr[i];
    }
    m = arr[0];
    for(j=1; j<x; j++){
        if(arr[j]<m){
            m = arr[j];
            p = j;
        }
    }
    cout<<"Menor valor: "<<m<<endl;
    cout<<"Posicao: "<<p<<endl;
    return 0;
}
