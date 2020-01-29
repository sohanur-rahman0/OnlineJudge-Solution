#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,t;
    while(cin>>n,n){
            t = sqrt(n);
        if(n==(t*t)){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
}
