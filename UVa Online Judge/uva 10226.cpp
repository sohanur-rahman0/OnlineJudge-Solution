#include<iostream>
#include<map>
#include<string>
#include<iomanip>

using namespace std;
int main()
{

    int tc;
    //string s;
    cin>>tc;
    getchar();
    getchar();

    while(tc--)
    {
        map<string,int>dict;
        string s;
        int total = 0;
        while(getline(cin,s))
        {
            if(s.compare("")==0)
                break;
                dict[s]++;
                total++;
        }
        for(auto i:dict)
        {
            cout<<i.first<<" "<<fixed<<setprecision(4)<<((i.second)*100.00)/total<<endl;
        }
        if(tc)
            puts("");
    }
    return 0;
}
