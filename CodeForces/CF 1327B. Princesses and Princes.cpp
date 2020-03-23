#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int t=n;
        vector<int>List[n+1];
        vector<bool>married(n+1,false);
        vector<bool>md(n+1,false);

        int dn=1;
        while(t--)
        {
            int k;
            cin>>k;
            bool flag = false;
            while(k--){
                int temp;
                cin>>temp;
                List[dn].push_back(temp);
                if(!married[temp] && !flag){
                        flag = true;
                    married[temp] = true;
                    md[dn] = true;

                }
            }
            ++dn;
        }
//        for(int i=1; i<=n; i++)
//        {
//            cout<<i<<"->";
//            for(auto it:List[i])
//                cout<<it<<" ";
//            cout<<endl;
//        }
        bool dt=false,p=false;
        int ansd,ansp;
        for(int i=1; i<=n; i++)
        {
            if(!md[i]){
                dt = true;
                ansd=i;
                break;

            }
        }

         for(int i=1; i<=n; i++)
        {
            if(!married[i])
            {
                p = true;
                ansp = i;
                break;
            }
        }
        if(dt && p){
            cout<<"IMPROVE"<<endl;
            cout<<ansd<<" "<<ansp<<endl;
        }else{
            cout<<"OPTIMAL"<<endl;
        }

    }
}
