#include<bits/stdc++.h>
using namespace std;

int countstring(string &sub, string &str){
    int m = sub.length();
    int n = str.length();
    int c = 0,cc=0;
    vector<string>arr;
    string s="";
    for(int i=0; i<n; i++){
        s+= str[i];
        cc++;
        if(cc==m){
            arr.push_back(s);
            cc = 0;
        }
    }

    for(auto it: arr){
        if(it == sub){
            c++;
        }
    }
    return c;
}
int main()
{
    // string a = "aaba", b = "aabaabaa";
    // cout<<countstring(a,b);
    int tc;
    cin>>tc;
    string str;
    char c;
    while(tc--){
        getchar();
        cin>>str;
        int count = 0;
        string sub="";
        vector<string> arr;
        for(int i=0; str[i]; i++){
            sub += str[i];
            arr.push_back(sub);
            if (i== ((str.length()/2)+1)){
                break;
            }
        }

        bool flag = false;

        for(auto itr:arr){
            if(countstring(itr, str) * itr.length() == str.length()){
                flag = true;
                cout<<itr.length()<<endl<<endl;
                break;
            }
        }

        if(flag == false){
            cout<<str.length()<<endl<<endl;
        }
        
    }
}

