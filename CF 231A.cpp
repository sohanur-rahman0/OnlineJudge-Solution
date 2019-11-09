#include<iostream>
using namespace std;
int main()
{
    int p,a,b,c,count=0;
    cin>>p;
    while(p--)
    {
        cin>>a>>b>>c;
        if(a+b+c>=2)
            count++;
    }
    cout<<count<<endl;
    return 0;
}
