#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    string str;
    cin>>n>>t>>str;
    while(t--){
        for(int i=0; i<str.size()-1; i++){
            if(str[i]=='B' && str[i+1]=='G'){
                swap(str[i],str[i+1]);
                i++;
            }
        }
    }
    cout<<str<<'\n';

}
