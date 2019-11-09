#include<iostream>
using namespace std;
int main()
{
    int tc,l,w,h,c=1;
    cin>>tc;
    while(tc--){
        cin>>l>>w>>h;
        if(l<=20 && w<=20 && h<=20)
            cout<<"Case "<<c++<<": "<<"good"<<endl;
        else
            cout<<"Case "<<c++<<": "<<"bad"<<endl;

    }
}
