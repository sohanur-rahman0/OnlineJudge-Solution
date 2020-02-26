#include<iostream>
using namespace std;

int fib(int n){
    int f[n+2];
    f[0] = 0;
    f[1] = 1;

    int i;
    for(i=2; i<=n; i++){
        f[i] = f[i-1]+ f[i-2];
    }
    return f[n];


}

int main()
{
    int n;
    while(cin>>n){
        cout<<fib(n)<<endl;
    }
}
