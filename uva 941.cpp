#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;


int main()
{
    long long tc;
    long long factorial[20];
    factorial[0] = factorial[1] = 1;
    for(int i=2; i<20; i++)
    {
        factorial[i] = factorial[i-1]*i;
    }
    cin>>tc;
    while(tc--)
    {

        string str;
        long long n;
        cin>>str>>n;

        int l = str.size();

        sort(str.begin(),str.end());
        vector<char>st(str.begin(),str.end());
        string perm;
        for(int i=l-1; i>=0; i--)
        {
            int p = n/factorial[i];
            perm+=st[p];
            st.erase(st.begin()+p);
            n = n%factorial[i];

        }

        cout<<perm<<endl;

    }
    return 0;
}
