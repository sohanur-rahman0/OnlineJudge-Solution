#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc,m;
    int arr[100];
    string str;

    cin>>tc;
    cin.ignore();
    while(tc--){
        getline(cin,str);
        istringstream s(str);
        int n=0;
        while(s>>arr[n])n++;

        m = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
                m = max(m,__gcd(arr[i],arr[j]));
        }
        cout<<m<<'\n';
    }
}
