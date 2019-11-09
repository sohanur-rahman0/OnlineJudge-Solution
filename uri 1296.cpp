#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<double> in(3);

    double area,s;
    while(cin>>in[0]>>in[1]>>in[2])
    {


        sort(in.begin(),in.end());
        if(in[0]+in[1]>in[2])
        {
            s = (in[0]+in[1]+in[2])/2.00;
            area =sqrt(s*(s-in[0])*(s-in[1])*(s-in[2]));
            area = 4.0* area/3.0;
            cout<<fixed<<setprecision(3)<<area<<endl;
        }
        else
            cout<<"-1.000"<<endl;
    }
    return 0;
}
