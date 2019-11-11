#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    long int l = a.size();
    for(long int i=0; a[i]; i++){
        if(a[i]=='0' && b[i]=='0')
            a[i] = '0';
        else if(a[i]=='1' && b[i]=='0')
            a[i] = '1';
        else if(a[i]=='0' && b[i]=='1')
            a[i] = '1';
        else if(a[i]=='1' && b[i]=='1')
            a[i] = '0';
    }
//    cout<<l<<endl;
//    for(long int i=0; i<l; i++)
//        cout<<c[i];
    cout<<a;
}
