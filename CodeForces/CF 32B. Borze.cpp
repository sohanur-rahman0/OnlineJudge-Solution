#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int l=str.size();
    for(int i=0; i<l; i++){
        if(str[i]=='.'){
            cout<<"0";

        }
        else if(str[i]=='-' && str[i+1] == '.'){
            cout<<"1";
            i++;
        }
        else if(str[i]=='-' && str[i]=='-'){
            cout<<"2";
            i++;
        }
    }
    cout<<"\n";
}
