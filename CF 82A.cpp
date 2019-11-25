#include<iostream>
using namespace std;
int main()
{
    //string arr[6] = {"blank","Sheldon","Leonard","Penny","Rajesh","Howard"};
    long long n;
    cin>>n;
    //cout<<n%5;
    if(n%5==1)
        cout<<"Sheldon";
    else if(n%5==2)
        cout<<"Leonard";
    else if(n%5==3)
        cout<<"Penny";
    else if(n%5==4)
        cout<<"Rajesh";
    else
        cout<<"Howard";
}
