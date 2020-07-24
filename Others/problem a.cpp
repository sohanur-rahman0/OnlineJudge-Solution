#include<iostream>
using namespace std;
int main()
{
    int i,n,p=0,s;
    cin>>n;
    int arr[101] = {0};
    for(i=0; i<n; i++){
        cin>>s;
        arr[s]++;
    }
    for(i=0; i<101; i++){
        p= p + arr[i]/2;
    }
    cout<<p<<endl;
    return 0;
}
