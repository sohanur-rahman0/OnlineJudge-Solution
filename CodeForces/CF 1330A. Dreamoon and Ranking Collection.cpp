#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,k,m,ans=0;
        cin>>n>>x;
        vector<int>a;
        for(int i=0; i<n; i++)
        {
            cin>>k;
            a.push_back(k);
        }


        for(int i=1; x>0; i++)
        {
            if (a.end() ==find(a.begin(),a.end(),i))
            {
                x--;
                ans= i;
            }
            else
                ans=i;


        }

        if(a.end()==find(a.begin(),a.end(),ans+1)){
            cout<<ans<<endl;
        }else{
            do{
                ans++;
            }while(find(a.begin(),a.end(),ans+1)!=a.end());
            cout<<ans<<endl;

        }


        a.clear();
    }
}
