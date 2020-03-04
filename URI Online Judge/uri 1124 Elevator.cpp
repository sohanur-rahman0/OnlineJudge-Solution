#include<bits/stdc++.h>///did not solve yet;
using namespace std;
#define pi acos(-1)
int main()
{
    double l,c,r1,r2;
    while(cin>>l>>c>>r1>>r2,l,c,r1,r2)
    {
        double areaElevator = l*c;
        double r = r1 + r2;
        double areaCircle = pi * r * r;
        if(areaElevator<areaCircle)
        {
            cout<<"N"<<endl;
        }
        else
        {
            cout<<"S"<<endl;
        }
    }
}
