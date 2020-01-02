#include<bits/stdc++.h>
using namespace std;
int main()
{
    string word,compare;
    cin>>word>>compare;
    reverse(compare.begin(),compare.end());
    if(word==compare)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
