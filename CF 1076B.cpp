#include<iostream>
#include<cmath>
using namespace std;
//SmallestPrimeDevisor(long long num)
//{
//
//    if(num%2==0)
//        return 2;
//    for(int i=3; i*i<=num; i+=2)
//    {
//        if(num%i==0)
//            return i;
//    }
//
//    return num;
//
//}
int main()
{
    long long n,c=0,l;
    cin>>n;
    bool flag = false;
    l = sqrt(n);
    for(int i=2; i<l+1; i++)
    {
        if(n%i==0)
        {
            flag = true;
            n -= i;
            c++;
            break;
        }
    }
    if(flag)
    {
        c += n/2;
    }
    else
        c = 1;

    cout<<c<<endl;

}
