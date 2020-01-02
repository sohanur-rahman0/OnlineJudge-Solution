#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,k,t,l,c=0,d=0;
    cin>>t;
    while(t--)
    {c=0;
    ++d;
      cin>>a>>b;
      for (c=1;c<=b;c++)
      {
          for (i=1;i<=a;i++)
          {
              for(j=1;j<=i;j++)
              {
                  printf("%d",i);
              }printf("\n");
          }for (k=i-2;k>=1;k--)
          {
              for (l=k;l>=1;l--)
              {
                  cout<<k;
              }cout<<endl;
          }if (c!=b)cout<<endl;
      }
    if(t)cout <<endl;
    }

}
