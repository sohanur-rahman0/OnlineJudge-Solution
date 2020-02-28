#include<bits/stdc++.h>//did not solve yet
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    int c=0;
    while(n--){
        cin>>a>>b;
        if(a==b)c++;
    }
    cout<<c<<endl;
}
