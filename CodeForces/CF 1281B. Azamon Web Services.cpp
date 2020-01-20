#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    string s,c,temp;
    while(tc--){
        cin>>s>>c;
        if(s<c){
            cout<<s<<endl;
            continue;
        }
        temp = s;
        bool flag = false;
        sort(temp.begin(),temp.end());
        for(int i=0; s[i]; i++){
            for(int j=i+1; s[j]; j++){
                if(s[i]==temp[i])continue;

                swap(s[i],s[j]);
                if(s<c){
                    flag = true;
                    break;
                }
                swap(s[i],s[j]);

            }
            if(flag)break;

        }
        if(flag)
            cout<<s<<endl;
        else
            cout<<"---"<<endl;
    }

}
