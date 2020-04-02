#include<bits/stdc++.h>
using namespace std;

int main()
{

    int prime[32769]= {0};
    bool flag;
    for(int i=2; i<=32768; i++)
    {
        flag = false;
        for(int j=2; j*j<=i; j++)
        {
            if(i%j==0)
            {
                flag = true;
                break;
            }
        }
        if(!flag)
        {
            prime[i] = 1;
        }
    }
    int n;
    while(cin>>n,n)
    {
        int c=0;
        for(int i=2; i<=n/2; i++)
        {
            if(prime[i]==1)
            {
                if(prime[n-i]==1)
                    c++;
            }
        }
        cout<<c<<endl;
    }


}
