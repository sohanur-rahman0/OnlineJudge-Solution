#include<iostream>
using namespace std;
long long fib(long long n){
    if(n==1 || n == 2)
        return 1;
    else
        return
        fib(n-1)+fib(n-2);
}


int main()
{
 long long n;
 while(cin>>n)
 cout<<fib(n)<<endl;
}
