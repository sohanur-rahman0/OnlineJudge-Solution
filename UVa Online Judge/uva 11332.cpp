#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,temp,sum;
    while(cin>>n)
    {
        if(n==0)
            break;
        temp = n;
        while((temp/10)>0)
        {
            sum = 0;
            while(n>0)
            {
                sum +=n%10;
                n/=10;
            }
            temp = sum;
            n = temp;
        }
        cout<<temp<<endl;

    }
    return 0;
}

