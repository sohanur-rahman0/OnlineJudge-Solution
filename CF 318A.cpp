#include<iostream>
using namespace std;
int main()
{
    long long n,k,temp;
    cin>>n>>k;
    if(n&1==1){
        //cout<<"odd";
        temp = (n/2) + 1;
    }else{
        temp = (n/2);
    }
    if(k<=temp)
        cout<<(2*k)-1;
    else
        cout<<(k-temp)*2;
}
