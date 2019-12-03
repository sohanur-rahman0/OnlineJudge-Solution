#include<bits/stdc++.h>
using namespace std;
bool comp(char x,char y){
    if(tolower(x)==tolower(y))
        return x<y;
    else
        return tolower(x)<tolower(y);

}
int main()
{
    int tc;
    cin>>tc;
    string str;
    while(tc--){
        cin>>str;
        sort(str.begin(),str.end(),comp);
        //cout<<str<<endl;
        cout<<str<<endl;
        while(next_permutation(str.begin(),str.end(),comp)){
            cout<<str<<endl;
        }
    }
}
