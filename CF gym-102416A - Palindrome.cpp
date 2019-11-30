#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int tc,c=0;
    cin>>tc;
    string str,rev;
    while(tc--){
        cin>>str;
        rev = str;
        reverse(rev.begin(),rev.end());
        if(str==rev)c++;
    }
    cout<<c<<endl;
}
