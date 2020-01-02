#include<iostream>
using namespace std;

string to_base(int n,int b)
{
    string bases = "0123456789abcdef";
    string result = "";
    while(n>0){
        result = bases[n%b]+result;
        n/=b;
    }
        return result;
}


int main()
{
    int tc,n,c=1,b1,b2,output1,output2;
    char arr[5];
    cin>>tc;
    while(tc--){
        cin>>n>>arr;
        if(arr[0]=='b'){
            b1=10;
            b2=16;
            cout<<"Case "<<c<<":"<<endl;
            cout<<to_base(1010,10)<<" dec"<<endl;
            cout<<to_base(n,b2)<<" hex"<<endl;
            c++;
        }
    }

}
