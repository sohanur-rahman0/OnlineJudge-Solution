#include<iostream>
using namespace std;
int main()
{
    int n,m,t;
    while ( cin>>n>>m)
    {
        if (n>=m)
        {
            t=(n/2)+(n%2);
            for(int i=t; i<=n; i++)
            {
                if(i%m==0)
                {
                    cout<<i<<endl;
                    break;
                }
            }

        }
        else
            cout<<"-1"<<endl;

    }
}
