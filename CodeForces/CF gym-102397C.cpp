#include<iostream>
#include<string>
using namespace std;
int main()
{
    int x,y;
    string str;
    cin>>x>>y>>str;
    for(int i=0; str[i]; i++)
    {
        if(str[i]=='U')
            y+=1;
        else if(str[i]=='D')
            y-=1;
        else if(str[i]=='L')
            x-=1;
        else
            x+=1;
    }
    cout<<x<<" "<<y<<endl;
}
