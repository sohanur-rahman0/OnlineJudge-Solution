#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    string str;
    cin>>tc;
    while(tc--){
        cin>>str;
        int l = str.length();
        for(int i=0; i<l; i++){
            if(i%2==0){
                if(str[i]=='a'){
                    str[i] = 'a' + 1;
                } else {
                    int decrease = str[i] - 'a';
                    str[i] = str[i] - decrease;
                }
                
            } else {
                if(str[i]=='z'){
                    str[i] = 'z' - 1;
                } else {
                    int increase = 'z' - str[i];
                    str[i] = str[i] + increase;
                }
            }
        }

        cout<<str<<endl;
    }
}