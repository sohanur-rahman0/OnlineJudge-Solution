#include<iostream>
using namespace std;
int main()
{
    int tc,a,b,n;
    cin>>tc;
    while(tc--){
        cin>>n;
        if(n>10){
            a = 10;
            b = n - a;
        }
        else{
            a = n;
            b = 0;
        }
        cout<<b<<" "<<a<<endl;
    }
    return 0;
}
