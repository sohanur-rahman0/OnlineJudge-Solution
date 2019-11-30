#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
const int LA = 97;
const int LM = 109;
const int LN = 110;
const int LZ = 122;

const int UA = 65;
const int UM = 77;
const int UN = 78;
const int UZ = 90;

string rot13(string str)
{
    int l = str.size();
    int i = 0;
    while(i!=l){
        if(str[i]>=LA && str[i]<=LM)
            str[i] = str[i]+13;
        else if(str[i]>=LN && str[i]<=LZ)
            str[i] = str[i]-13;
        else if(str[i]>=UA && str[i]<=UM)
            str[i] = str[i]+13;
        else if(str[i]<=UM && str[i]<=UZ)
            str[i] = str[i]+13;
        i++;

    }
    return str;
}
int main()
{
    int tc;
    string s;
    cin>>tc;
    while(tc--)
    {
        cin>>s;
        for(int i=0; s[i]; i++)
        {
            if(isupper(s[i]))
                s[i]=tolower(s[i]);
            else
                s[i] = toupper(s[i]);
        }
        reverse(s.begin(),s.end());
       // cout<<"rev "<<s<<endl;

        cout<<rot13(s)<<endl;
    }
}
