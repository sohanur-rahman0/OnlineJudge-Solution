#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string a,b,c,temp;
    cin>>a>>b>>c;
    temp = a+b;
    sort(temp.begin(),temp.end());
    sort(c.begin(),c.end());
    if(temp == c)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;

}
