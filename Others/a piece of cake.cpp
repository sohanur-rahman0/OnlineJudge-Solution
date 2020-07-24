#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,tc;
   cin>>tc;
   while(tc--){
   cin>>n;
   if(n<0){
       n*=-1;
       
       for(int i=n; i>0 ; i--)
       {
           cout<<"-"<<i<<" ";
       }
       
       cout<<"0"<<endl;
       
   }else{
    if(n==0){
        cout<<0<<endl;
    } else{
        cout<<0;
   for(int i=1; i<=n; i++)
   {
       cout<<" "<<i;
   }
   cout<<endl;
   }
   }
   }
    
}

