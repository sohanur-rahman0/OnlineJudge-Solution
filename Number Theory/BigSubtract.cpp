#include<bits/stdc++.h>
using namespace std;
bool isSmaller(string a,string b)
{
    if(a.size()<b.size())
        return true;
    if(b.size()>a.size())
        return false;

    for(int i=0; a[i]; i++)
    {
        if(a[i]<b[i])
            return true;
        else if(a[i]>b[i])
            return false;
    }
    return false;
}
string BigSubtract(string a,string b)
{
    string sub = "";
    if(isSmaller(a,b))
        swap(a,b);
    int len1 = a.size();
    int len2 = b.size();
    int dif = len1 - len2;

    int carry = 0;
    for(int i=len2-1; i>=0; i--)
    {
        int s = ((a[i+dif]-'0') - (b[i]-'0')-carry);
        if(s<0)
        {
            s += 10;
            carry = 1;
        }
        else
        {
            carry = 0;
        }
        sub.push_back(s + '0');

    }
    for(int i=len1-len2-1; i>=0; i--)
    {
        if(a[i]=='0' && carry)
        {
            sub.push_back('9');
            continue;
        }
        int s = ((a[i]-'0')-carry);
        if(i>0 || s>0)
            sub.push_back(s + '0');
        carry =0;
    }
    reverse(sub.begin(),sub.end());
    return sub;
}
int main()
{
    while(true)
    {
        string a,b;
        cin>>a>>b;
        cout<<"Subtract :"<<BigSubtract(a,b)<<endl;
    }
}

