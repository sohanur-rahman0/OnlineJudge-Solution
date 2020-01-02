#include<iostream>
using namespace std;
int main()
{
    long long n,a,b;
    cin>>n>>a>>b;
    long long ns = n*6;
    if(ns <= a*b){
        cout<<a*b<<endl<<a<<" "<<b<<endl;
    }
    else{
        cout<<n*6<<endl<<(n*6)/b<<" "<<<<endl;
    }

}
