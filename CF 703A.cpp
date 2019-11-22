#include<iostream>
using namespace std;
int main()
{
    int n,a,b,mw=0,cw=0;
    cin>>n;
    while(n--){
        cin>>a>>b;
        if(a>b)
            mw++;
        else if(a<b)
            cw++;
    }
    //cout<<mw<<" "<<cw;
    if(mw>cw)
        cout<<"Mishka"<<endl;
    else if(mw<cw)
        cout<<"Chris"<<endl;
    else
        cout<<"Friendship is magic!^^"<<endl;

}
