#include<bits/stdc++.h>///did not solve yet;
using namespace std;
#define pi acos(-1)
int main()
{
    double l,c,r1,r2;
    while(cin>>l>>c>>r1>>r2,l,c,r1,r2)
    {
        if((l*c)>= ((4*r1*r1)+(4*r2*r2)))
        {

                if((r1+r2)*2<= l || (r1+r2)*2<=c)
                {
                    cout<<"Y"<<endl;
                }
                else
                {
                    cout<<"N"<<endl;
                }
            }

        else
        {
            if((r1+r2)*2<= l || (r1+r2)*2<=c)
                {
                    cout<<"Y"<<endl;
                }
                else{
            cout<<"N"<<endl;
                }
        }
    }
}
