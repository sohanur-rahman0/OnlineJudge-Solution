#include<iostream>
using namespace std;
long gcd(long a,long b){
    if(b == 0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
    int tc,c=0;
    cin>>tc;
    string a,b;
    while(tc--){
        cin>>a>>b;
        long x = strtoull(a.c_str (),NULL,2);
        long y = strtoull(b.c_str (),NULL,2);
        //cout<<x<<" "<<y<<endl;
        //long z = gcd(x,y);
        //cout<<z;
        if(gcd(x,y)>1)
            cout<<"Pair #"<<++c<<": All you need is love!"<<endl;
        else
            cout<<"Pair #"<<++c<<": Love is not all you need!"<<endl;
    }
}
