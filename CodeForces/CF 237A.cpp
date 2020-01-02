#include<iostream>

using namespace std;
int main()
{
    long n,h,m,hh,mm,minute,c=1,waiter=1,minu;
    cin>>n;
    cin>>hh>>mm;
    minu = hh*60 + mm;
    n-=1;
    while(n--)
    {
        cin>>h>>m;
        minute = h*60 + m;
        if(minu==minute)
        {
            c++;
            if(c>waiter)
            {
                waiter = c;
            }

        }
        else
            c=1;

        minu = minute;
    }
    cout<<waiter<<endl;
}
