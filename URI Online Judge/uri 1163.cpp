#include<bits/stdc++.h>
using namespace std;

int main()
{
    double h,a,g=9.80665,v,pi=3.14159,radian,vx,vy,t,x;
    int n,p1,p2;
    while(scanf("%lf",&h)!=EOF)
    {
        cin>>p1>>p2>>n;
        while(n--)
        {
            cin>>a>>v;
            radian = a * pi/180.0;
            vx = v*cos(radian);
            vy = v*sin(radian);
            t = vy + sqrt(vy* vy + 2*g*h);
            x = t*vx/g;


            if(x>=p1 && x<=p2)
                printf("%.5lf -> DUCK\n",x);
            else
                printf("%.5lf -> NUCK\n",x);

        }
    }
    return 0;
}
