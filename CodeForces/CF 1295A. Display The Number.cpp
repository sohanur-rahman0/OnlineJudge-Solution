#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long tc,n;
    cin>>tc;
    while(tc--){
        cin>>n;
        string ans="";
        while(n>=0){
            if(n==3){
                ans+="7";
                n-=3;
            }
            else if(n>=2){
                ans+="1";
                n-=2;
            }else if(n>=3){
                ans+="7";
                n-=3;
            }else if(n>=4){
                ans+="4";
                n-=4;
            }
            else if(n>=5){
                ans+="5";
                n-=5;
            }else if(n>=6){
                ans+="9";
                n-=6;
            }else if(n>=7){
                ans+="8";
                n-=7;
            }else if(n==1 || n==0){
                break;
            }
        }
        if(ans[ans.size()-1]>ans[0]){
            swap(ans[0],ans[ans.size()-1]);
        }
        cout<<ans<<endl;
        ans.clear();

    }
}
