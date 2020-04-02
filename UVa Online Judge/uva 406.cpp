#include<bits/stdc++.h>
using namespace std;
int main()
{

    bool flag;
    int prime[1005]= {0},p=0;
    for(int i=1; i<1001; i++)
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
            prime[p++] = i;
        }
    }
//    for(int i=0; i<1001; i++){
//        cout<<prime[i]<<" ";
//    }
    int n,c;
    while(cin>>n>>c)
    {
        cout<<n<<" "<<c<<":";
        int store[n],j=0;
        for(int i=0; i<p; i++)
        {
            if(prime[i]<=n)
            {
                store[j++] = prime[i];
            }
            else
            {
                break;
            }
        }
        if(j%2==1)
            c = c*2 - 1;
        else c = c*2;
        if(c>j)
            c = j;

        for(int i=j/2-c/2,j=0; j<c; i++,j++)
        {
            cout<<" "<<store[i];
        }cout<<endl<<endl;
    }

}
