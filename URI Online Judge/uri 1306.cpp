#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int a,b,c=1;
    while(cin>>a>>b && a!=0 && b!=0){
        int ans;
        ans = (a-1)/b;
        if(ans>26)
            cout<<"Case "<<c++<<": "<<"impossible"<<endl;
        else
        cout<<"Case "<<c++<<": "<<ans<<endl;

    }
    return 0;
}
