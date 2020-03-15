#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main()
{
    double a,b,c;
    while(cin>>a>>b>>c)
    {
        double p = (a+b+c)/2.0;
        double AreaTriangle = sqrt((p*(p-a)*(p-b)*(p-c)));
        double InnerCircleRadious = ((2.0*AreaTriangle)/p)/2.0;
        double AreaInnerCircle = pi * InnerCircleRadious * InnerCircleRadious;
        double OuterCircleRadious = (a*b*c)/(sqrt(((a+b+c)*(b+c-a)*(c+a-b)*(a+b-c))));
        double AreaOuterCircle = pi * OuterCircleRadious * OuterCircleRadious;

        double sunflower = AreaOuterCircle - AreaTriangle;
        double violet = AreaTriangle - AreaInnerCircle;
        double rose = AreaInnerCircle;

        cout<<fixed<<setprecision(4)<<sunflower<<" "<<violet<<" "<<rose<<endl;

    }
}
