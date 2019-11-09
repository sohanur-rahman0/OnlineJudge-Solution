#include<iostream>
using namespace std;
int main()
{
    int n,avg,c=0,sum=0,ans=0;
    while(cin>>n && n!=0){

            sum =0;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
        avg = sum/n;
        for(int i=0; i<n; i++)
        {
            if(arr[i]>avg){
               ans +=  arr[i]-avg;
            }
        }
        cout<<"Set #"<<++c<<endl;
        cout<<"The minimum number of moves is "<<ans<<"."<<endl;
        ans=0;
    }
}
