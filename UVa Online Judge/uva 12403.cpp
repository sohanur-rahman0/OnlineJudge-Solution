#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,d,total=0;
    string str;
    cin>>t;
    while(t--){
        cin>>str;
        if(str=="donate"){
            cin>>d;
            total+=d;
        }
        else
            cout<<total<<endl;
    }
}
