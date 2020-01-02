#include<iostream>
using namespace std;
int main()
{
    string arr[] = {"Sheldon","Leonard","Penny","Rajesh","Howard"};
    long long n;
    cin>>n;
    //cout<<n%5;
    if(n==1)
        cout<<"Sheldon";
    else if(n==2)
        cout<<"Leonard";
    else if(n==3)
        cout<<"Penny";
    else if(n==4)
        cout<<"Rajesh";
    else if(n==5)
        cout<<"Howard";
        else{
            while(n>=5){
                n-=5;
                n/=2;
            }
            cout<<arr[n]<<endl;
        }
}
