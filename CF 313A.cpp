#include<iostream>
using namespace std;
int main()
{
    long long n,x,y;
    cin>>n;
    if(n>=0)
        cout<<n<<endl;
    else
    {
        x = n/10;
        y = (n/100)*10 + n%10;
        cout<<max(x,y)<<endl;
    }
}
