#include<bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;
int main()
{
    long double ab,ad,a,bd,ac;
    long long int tc;
    cin>>tc;
    while(tc--){
        cin>>ab>>ad>>a;
        a = (a*acos(-1.0))/180.0;
        bd = sqrt(ab*ab+ad*ad-(2*ab*ad*cos(a)));
        //cout<<bd<<endl;
        long double bc = 2*bd;
        long double b,dc = bd;
        b = (ad*ad + bd*bd - ab*ab)/(2*ad*bd);
        //b =  (b * acos(-1.0))/180.0;
        b = (acos(b)*180.0)/pi;
        //cout<<b<<endl;
        long double d = 180-b;
        d = (d*pi)/180.0;
        ac = sqrt(dc*dc + ad*ad - (2*dc*ad*cos(d)));
        //cout<<ac<<endl;

        cout<<fixed<<setprecision(9)<<ac*ac+ab*ab<<endl;


    }
}

