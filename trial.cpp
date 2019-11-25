#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,t;
    int l1,l2;
    while (getline(cin,a))
    {
        getline(cin,b);
        l1=a.size();

        l2=b.size();
//        l=min(l1,l2);
//        l3=max(l1,l2);
//        if (l1==l)
//        {
//            t=a;
//            a=b;
//            b=t;
//        }
        string tt;


        for (int i=0; i<l1; i++)
        {
            for (int j=0; j<l2; j++)
            {
                if (a[i]==b[j])
                {
                    tt+=a[i];
                    //c++;
                    a[i]= '(';
                    b[j]= ')';

                }
            }

        }

        sort(tt.begin(),tt.end());
//        for (i=0;i<c;i++)
//        {
//            cout<<tt[i];
//        }cout<<endl;
        cout<<tt<<endl;
    }
}
