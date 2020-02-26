#include<iostream>
using namespace std;

int fib(int n){
    int mem[n]={0};
    int result;

    if(mem[n]!=0)
        return mem[n];
    if(n==1 || n==2)
        result = 1;
    else
        result = fib(n-1)+fib(n-2);
     mem[n] = result;
    return result;

}

int main()
{
    while(true){
    int n;
    cin>>n;
    //int arr[n];
    cout<<fib(n)<<endl;
    }
}
