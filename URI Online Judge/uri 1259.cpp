#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>Even,Odd;
    int n;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        if(t%2==0){
            Even.push_back(t);
        }else{
            Odd.push_back(t);
        }
    }
    sort(Even.begin(),Even.end());
    sort(Odd.begin(),Odd.end(),greater<int>());
    for(auto i:Even)cout<<i<<endl;
    for(auto i:Odd)cout<<i<<endl;
}
