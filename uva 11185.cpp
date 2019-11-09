#include<bits/stdc++.h>

using namespace std;

string to_base(long long int n)
{
    string bases = "012";
    string result="";
    while(n>0){
        result = bases[n%3]+result;
        n/=3;
    }
    return result;
}

int main()
{
    long long int n;
    while(cin>>n){
            if(n<0)break;
            if(n==0){
                cout<<0<<endl;
            }else{
    cout<<to_base(n)<<endl;
            }

    }
    return 0;

}
