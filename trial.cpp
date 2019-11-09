#include<bits/stdc++.h>
using namespace std;
int main()
{int n,i,j,sum=0,sum2,ans=0,c=0;
    cin>>n;

        int a[n];
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }

        sort(a,a+n);
        sum2=(sum/2);


        c = 0; ans=0;
        for(int i=n-1;i>=0;i--)

        {
            ans+=a[i];
            c++;

          if(ans>sum2)break;

        }
        cout<<c<<endl;

}
