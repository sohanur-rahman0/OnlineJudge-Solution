#include<iostream>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int x = a.size();
    int y = b.size();
    if(a==b)
        cout<<"-1"<<endl;
    else
        cout<<max(x,y)<<endl;
}
