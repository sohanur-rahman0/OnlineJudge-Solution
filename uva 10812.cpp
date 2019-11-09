#include<iostream>
using namespace std;

int main()
{
    long long int s,d,tc,a,b;
    cin>>tc;
    while(tc--){
        cin>>s>>d;
        if(d>s){
            cout<<"impossible"<<endl;
        }
        else{
        a = (s+d)/2;
        b = s - a;
        if(a + b == s && abs(a-b) == d)
            cout<<a<<" "<<b<<endl;
        else
            cout<<"impossible"<<endl;
        }
    }

    return 0;
}
