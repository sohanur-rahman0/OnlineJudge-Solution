#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    int l = sqrt(n);
    for(int i=1; i<=l; i++)
    {
        if(n%i==0){
            a = n/i;
            b = i;
        }
    }
    cout<<a<<" "<<b<<endl;
}
