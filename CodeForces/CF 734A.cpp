#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,ca=0,cd=0;
    string str;
    cin>>n;
    cin>>str;
    for(int i=0; str[i]; i++){
        if(str[i]=='A')
            ca++;
        else
            cd++;
    }
   // cout<<ca<<" "<<cd;

    if(ca>cd)
        cout<<"Anton"<<endl;
    else if(ca<cd)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;

}
