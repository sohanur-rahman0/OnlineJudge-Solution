#include<bits/stdc++.h>

using namespace std;
int main()
{
    string a,b;
    int la,lb;
    while(getline(cin,a))
    {
        getline(cin,b);
        string s;
        la = a.length();
        lb = b.length();
        //sort(a.begin(),a.end());
        //sort(b.begin(),b.end());
        for(int i=0; i<la; i++)
        {
            for(int j=0; j<lb; j++)
            {
                if(a[i]==b[j])
                {
                    s+= a[i];
                    a[i] = '+';
                    b[j] = '-';
                }
            }
        }
        sort(s.begin(),s.end());
        cout<<s<<endl;

    }
}
