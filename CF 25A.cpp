#include<iostream>
using namespace std;
int main()
{
    int n,e=0,o=0,p;
    cin>>n;
    int arr[n];
    for(int i=1; i<=n; i++)
        cin>>arr[i];
    for(int i=1; i<=n; i++){
        if(arr[i]%2==0){
          e++;
        }
        else{
            o++;
        }
    }
    for(int i=1; i<=n; i++){
        if(e>o){
            if(arr[i]%2!=0){
                p = i;
                break;
            }
        }
        else{
            if(arr[i]%2==0){
                p = i;
                break;
            }
        }
    }
    cout<<p;
}
