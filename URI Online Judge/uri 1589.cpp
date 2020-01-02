#include<iostream>
using namespace std;

int main()
{
    int tc,p;
    char s[10];
    cin>>tc;
    while(tc--){
        cin>>s>>p;
        if(s[0]=='T' && s[1]=='h')
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;

    }
    return 0;
}
