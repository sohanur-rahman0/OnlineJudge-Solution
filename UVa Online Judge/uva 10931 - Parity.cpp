#include<bits/stdc++.h>
using namespace std;
string decToBinary(long long n)
{
    string bin="";
    while(n>0)
    {
        bin+=to_string(n%2);
        n/=2;
    }
    reverse(bin.begin(),bin.end());
    return bin;
}
int main()
{
    long long n;
    while(cin>>n,n)
    {
        string Binary = decToBinary(n);
        int c=0;
        for(int i=0; Binary[i]; i++)
        {
            if(Binary[i]=='1')
                c++;
        }
        cout<<"The parity of "<<Binary<<" is "<<c<<" (mod 2)."<<endl;


    }
}
