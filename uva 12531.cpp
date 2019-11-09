#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int a;
    while(cin>>a){
        if(a%6==0)
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;
    }
    return 0;
}
