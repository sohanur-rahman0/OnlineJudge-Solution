#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int c;
    char str[100],comp[100];
    cin>>str>>comp;
//    transform(str.begin(),str.end(),str.begin(),::tolower);
//    transform(comp.begin(),comp.end(),comp.begin(),::tolower);



    c = strcasecmp(str,comp);

    if(c<0)
        cout<<"-1"<<endl;
    else if(c>0)
        cout<<"1"<<endl;
    else
        cout<<"0"<<endl;

    return 0;
}
