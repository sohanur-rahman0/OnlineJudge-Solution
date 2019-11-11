#include<iostream>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    int a[n];
    int b[n];
    string ch;
    string dh;
    cin>>ch;
    cin>>dh;

        for(int i=0; i<n; i++){
            a[i] = (int)ch[i]-48;
            b[i] = (int)dh[i]-48;
        }

    for(int i=0; i<n; i++){
        c+= min(abs(a[i]-b[i]),10-abs(a[i]-b[i]));
    }
     cout<<c;
}
