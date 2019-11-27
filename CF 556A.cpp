#include<iostream>
using namespace std;
int main()
{
    string str;
    long n,one,zero;
    cin>>n>>str;
    one = zero = 0;
    for(int i=0; i<n; i++)
    {
        if(str[i]=='0')
            one++;
        else
            zero++;
    }
    long c = min(one,zero);
    cout<<n-2*c;

}
