#include<iostream>
using namespace std;
int main()
{
    int tc,n,i,temp,d;

    cin>>tc;
    while(tc--){
        int count[10]={0};
        cin>>n;
        for(i=1; i<=n; i++){
            temp = i;
            while(temp!=0){
                d = temp%10;
                count[d]++;
                temp = temp/10;
            }
        }
        for(i=0; i<9; i++)
            cout<<count[i]<<" ";
        cout<<count[9]<<endl;
    }
    return 0;
}
