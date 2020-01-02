#include<iostream>
using namespace std;
int main()
{
    string name;
    int c=0;
    while(cin>>name && name[0]!='*'){
        if(name=="Hajj")
            cout<<"Case "<<++c<<": "<<"Hajj-e-Akbar"<<endl;
        else
            cout<<"Case "<<++c<<": "<<"Hajj-e-Asghar"<<endl;

    }
}
