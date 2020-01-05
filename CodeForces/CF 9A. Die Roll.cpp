#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,w,a,b;
    cin>>y>>w;
    int m = max(y,w);
    a = (6-(m-1));
    b = 6;
    if(b%a==0){
        b = b/a;
        a = 1;
    }else if(a%2==0){
        a = a/2;
        b = 3;
    }
    cout<<a<<"/"<<b<<endl;

}
