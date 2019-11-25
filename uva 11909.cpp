#include<bits/stdc++.h>
#define pi acos(-1)
using namespace std;

int main()
{
    double l,w,h,t,v,b,a,c,volume;
    while(cin>>l>>w>>h>>t){

        b = l*tan(t*(pi/180.0));
        //a = l / cos(t*(pi/180));
        //volume = 0.5 * b * l * w;
        if(b>h)
        cout<<fixed<<setprecision(3)<<(0.5*h*h*l*w)/b<<" mL"<<endl;
        else
        cout<<fixed<<setprecision(3)<<(l*w*h)-(0.5*l*b*w)<<" mL"<<endl;
    }
    return 0;
}
