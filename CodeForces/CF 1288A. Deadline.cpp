#include<bits/stdc++.h>
using namespace std;
int main()
{
    double tc,n,d,tem,temp;
    bool flag;
    cin>>tc;
    while(tc--)
    {
        flag = false;
        cin>>n>>d;
        tem = 0;
        if(n>=d)
            cout<<"YES"<<'\n';
        else{
            for(int i=1;i<=n/2 ; i++){
                tem = i + ceil(d/(i+1));
                //n--;
                if(tem<=n){
                    flag = true;
                    break;
                }else{
                    flag = false;
                }




            }
            if(flag)
                cout<<"YES"<<'\n';
            else
                cout<<"NO"<<'\n';
        }
    }
}
