#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,l,l2,k=0,x;
    string a,b,c,d;
    cin>>t;
    while (t--)
    {k=0;
    x=0;
        cin>>a>>b;
        l=a.size();
        l2=b.size();
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
         if (l==1)c[0]=a[0];
         else {
        for(int i=0;i<l-1;i++)
        {
                if (a[i]!=a[i+1])
                {
                    c[k]=a[i];
                    k++;
                }
            }
            }if (l2==1)d[0]=b[0];
            else {
        for (int i=0;i<l2-1;i++)
        {
            if (b[i]!=b[i+1])
            {
                d[x]=b[i];
                x++;
            }}
        }if((c.compare(d)) == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}
