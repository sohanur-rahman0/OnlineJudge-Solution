#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b,n,c=0;
    cin>>a>>b>>n;
    ll co = n;
    bool flag = false;
    string str = to_string(a);
    while(n--){
        for(int i=0; i<=9; i++){
            str+=to_string(i);
            stringstream s(str);
            int t = 0;
            s>>t;
            if(t%b==0){
                c++;
                flag = true;
                break;
            }else{
                str.pop_back();
            }
        }
        if(flag == true){
            break;
        }
    }
    //cout<<c<<" "<<n<<endl;
    if(flag == true){
        for(int i=1; i<=n; i++){
            str+="0";
        }
        cout<<str<<endl;
    }else{
        cout<<"-1"<<endl;
    }

}
