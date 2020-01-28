#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,double>dict;
    int tc,element;
    cin>>tc;
    while(tc--)
    {
        cin>>element;
        while(element--)
        {
            string name;
            double value;
            cin>>name;
            cin>>value;
            dict[name] = value;
        }
        int buy;
        double ans = 0;
        cin>>buy;
        while(buy--)
        {
            string query;
            int quantity;
            cin>>query;
            cin>>quantity;
            ans += dict[query]*quantity;
        }
        cout<<fixed<<setprecision(2)<<"R$ "<<ans<<endl;
        dict.clear();
    }

}
