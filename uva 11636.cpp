#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,c,s=1;
    while(cin>>n && n>0){
            c=0;
        for(i=1; i<n; i*=2){
            c++;
        }

        cout<<"Case "<<s++<<": "<<c<<endl;
    }
    return 0;
}
