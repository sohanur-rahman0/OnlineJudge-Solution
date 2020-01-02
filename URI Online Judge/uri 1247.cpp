#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double d,vf,vg,var,td,ad;

    while(cin>>d>>vf>>vg){
        var = sqrt(12*12 + d*d);
        ad = 12/vf;
        td = var / vg;

       if(td>ad)
        cout<<"N"<<endl;
       else
        cout<<"S"<<endl;
    }
    return 0;
}
