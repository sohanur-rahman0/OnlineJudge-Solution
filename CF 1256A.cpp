#include<iostream>
using namespace std;
int main()
{
    long int tc,a,b,n,s;
    cin>>tc;
    while(tc--){
        cin>>a>>b>>n>>s;
        if(s%n <=b && (a*n +b)>=s)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
