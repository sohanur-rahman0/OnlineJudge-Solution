#include<iostream>
#include<cmath>
using namespace std;
///did not solved yet
int main()
{
    int n,a,sum;
    while(cin>>n>>a)
    {
        sum = 0;
        for(int i=1; i<=n; i++)
        {
            sum+= i * pow(a,i);
        }
        cout<<sum<<endl;
    }
}
