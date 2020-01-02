#include<bits/stdc++.h>

using namespace std;

/*int main()
{
    double n,p,c;
    while(cin>>n>>p)
    {
        cout<<fixed<<setprecision(0)<<pow(p,1.00/n)<<endl;
    }
    return 0;
}*/

int main()
{
    double n,p,c;
    while(cin>>n>>p)
    {

        cout<<fixed<<setprecision(0)<<exp(log(p)/n)<<endl;
    }
    return 0;
}
