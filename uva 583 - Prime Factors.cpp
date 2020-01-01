#include<bits/stdc++.h>
using namespace std;
vector<int>factor(0);

void primeFact(int m){
    int n;
    if(m<0){
        n = m* -1;
    }else{
        n = m;
    }
    while(n%2==0){
        factor.push_back(2);
        n/=2;
    }
    int len = sqrt(n);
    for(int i=3; i<=len; i++)
    {
        while(n%i==0)
        {
            factor.push_back(i);
            n/=i;
        }
    }
    if(n>2){
        factor.push_back(n);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    while(cin>>n,n){
        if(n<0){
           primeFact(n);
           cout<<n<<" = "<<"-1 x "<<factor[0];
           for(int i=1; i<factor.size(); i++)
           {
               cout<<" x "<<factor[i];
           }
           cout<<'\n';
           factor.clear();
           //p=0;
        }else{
             primeFact(n);
           cout<<n<<" = "<<factor[0];
           for(int i=1; i<factor.size(); i++)
           {
               cout<<" x "<<factor[i];
           }
           cout<<'\n';
           factor.clear();
           //p = 0;
        }
    }
}
