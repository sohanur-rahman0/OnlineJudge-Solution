#include<bits/stdc++.h>
using namespace std;

int main()
{

    double angle,ans,h,m;
    while(scanf("%lf:%lf",&h,&m)==2){
            if(h==0 && m == 0)break;
            else{
                angle = 0.5 * ((60 * h) - (11 * m));

            angle=abs(angle);

            if(angle > 180)
                angle = 360 - angle;

            cout<<fixed<<setprecision(3)<<angle<<endl;
            }
    }
    return 0;
}
