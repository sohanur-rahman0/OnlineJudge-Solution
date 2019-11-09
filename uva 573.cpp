#include<bits/stdc++.h>
using namespace std;
int main()
{
    double h,u,d,f,cd,uu,hh;
    int day;

    while(cin>>h>>u>>d>>f && h!=0)
    {
        uu=u;
        hh=0;
        day = 0;
        //length = 0;
        cd = u * (f/100.0);
        while(true)
        {
            day++;
            hh +=uu;
            if(hh>h)
            {
                cout<<"success on day ";
                break;
            }
            hh-=d;
            if(hh<0)
            {
                cout<<"failure on day ";
                break;
            }
            uu -=cd;
            if(uu<0)
                uu=0;
        }
        cout<<day<<endl;

    }

    return 0;

}


