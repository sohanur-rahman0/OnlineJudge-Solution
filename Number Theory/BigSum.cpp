#include<bits/stdc++.h>
using namespace std;
string BigSum(string a,string b)
{
    string sum = "";
    if(a.size()>b.size())swap(a,b);
    int len1 = a.size();
    int len2 = b.size();
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int carry = 0;
    for(int i=0; a[i]; i++){
        int s = ((a[i]-'0') + (b[i]-'0')+carry);
        sum.push_back(s%10 + '0');
        carry = s/10;
    }
    for(int i=len1; b[i]; i++)
    {
        int s = (b[i]-'0') + carry;
        sum.push_back(s%10 + '0');
        carry = s/10;
    }
    if(carry)sum.push_back(carry + '0');
    reverse(sum.begin(),sum.end());
    return sum;
}
int main()
{
    while(true)
    {
        string a,b;
        cin>>a>>b;
        cout<<"Sum :"<<BigSum(a,b)<<endl;
    }
}
