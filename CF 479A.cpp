#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int m = a+b*c;
    int n = a*(b+c);
    int o = a*b*c;
    int p = (a+b)*c;
    int q = a+b+c;
    int h = max(m,n);
    h = max(h,o);
    h = max(h,p);
    h = max(h,q);
    cout<<h<<endl;
}
