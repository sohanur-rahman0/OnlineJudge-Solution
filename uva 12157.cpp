#include<iostream>
using namespace std;
int main()
{
    int tc,n,tm,tj,c=0;

    cin>>tc;
    while(tc--){
        tm = tj = 0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
            tm += ((arr[i]/30)+1)*10;
            tj += ((arr[i]/60)+1)*15;
        }
        cout<<"Case "<<++c<<": ";
        if(tm<tj)
            cout<<"Mile "<<tm<<endl;
        else if(tm>tj)
            cout<<"Juice "<<tj<<endl;
        else
            cout<<"Mile Juice "<<tm<<endl;


    }
}
