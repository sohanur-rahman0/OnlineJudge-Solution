#include<iostream>
using namespace std;
int main()
{
    int tc,a,b,c=1;
    cin>>tc;
    while(tc--){
        cin>>a>>b;
        cout<<"Case "<<c++<<": "<<a+b<<endl;
    }
    return 0;
}
