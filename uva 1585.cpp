#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,c,preC;
    string score;
    cin>>tc;
    while(tc--){
        cin>>score;
        c=0;
        preC=0;
        for(int i=0; score[i]; i++){
            if(score[i]=='O'){
                ++preC;
                c+=preC;
            }else
            preC=0;
        }
        cout<<c<<endl;
    }
}
