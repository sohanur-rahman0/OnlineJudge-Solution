#include<bits/stdc++.h>
using namespace std;

double f(double v)
{
    return pow(v,3)-3*v-5;

}
int main()
{

    long long int i;

    stepa: double a,b,c;
    cout<<"Enter two guessing number: ";
    cin>>a>>b;
    if(f(a)*f(b)>0){
        goto stepa;
    }
    double x1,x2,Er;
    cout<<"iteration\ta\tb\tc\tf(c)\n";
    for(i=1;i<=10;i++)
    {

        c=(a+b)/(2*1.0);

        cout<<" "<<i<<"\t\t";
        printf("%.4lf\t%.4lf\t%.4lf",a,b,c);
        x2=c;

        printf("\t%.4lf\n",f(c));


        if(f(a)*f(c)<0)
        {
            b=c;
        }
        else
        {
            a=c;
        }

    }
    cout<<"root is : "<<c<<endl;
}
