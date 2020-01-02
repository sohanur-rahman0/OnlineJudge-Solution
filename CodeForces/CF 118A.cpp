#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s,ns;
    cin>>s;
    int l = s.length();

    for(int i=0; i<l; i++){
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='Y' || s[i]=='y')
            continue;
        else
        {
            ns += '.';
            ns += tolower(s[i]);
        }
    }
    cout<<ns<<endl;
    return 0;

}
