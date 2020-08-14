#include<iostream>
using namespace std;

int mem[105]={0};



int fib(int n){
    
    int result;

    if(mem[n]!=0)
        return mem[n];
    if(n<=1)
        result = n;
    else
        result = fib(n-1)+fib(n-2);
     mem[n] = result;
    return result;

}

int main()
{
    
    int n;
    cin>>n;
    //int arr[n];
    cout<<fib(n+1)<<endl;
    
}
