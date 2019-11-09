#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int u,l;
    u = l = 0;
    for(int i=0; str[i]; i++)
    {
        if(isupper(str[i]))
            u++;
        else if(islower(str[i]))
            l++;
    }
    //cout<<l<<" "<<u;
    if(l>u){
        transform(str.begin(),str.end(),str.begin(),::tolower);
        cout<<str<<endl;
    }
    else if(l==u){
        transform(str.begin(),str.end(),str.begin(),::tolower);
        cout<<str<<endl;
}
    else{
        transform(str.begin(),str.end(),str.begin(),::toupper);
        cout<<str<<endl;
    }

    return 0;
}
