#include<iostream>
using namespace std;

int c;
int fib(int n)
{
    c++;
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return (fib(n-1)+fib(n-2));


}

int main()
{
    int tc,num;
    cin>>tc;
    while(tc--)
    {
        cin>>num;
        printf("fib(%d) = %d calls = %d\n",num,c-1,fib(num));
        c=0;
    }
    return 0;
}
