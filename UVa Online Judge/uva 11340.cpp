#include<iostream>
#include<map>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    while(n--)
    {
        cin>>k;
        map<char,int>dict;
        char c;
        int v;
        for(int i=0; i<k; i++)
        {
            cin>>c>>v;
            dict.insert(pair<char,int>(c,v));
        }
        int m;
        double p=0;
        string line;
        cin>>m;
        cin.ignore();
        for(int i=0; i<m; i++)
        {
            getline(cin,line);
            int l = line.length();
            for(int i=0; i<l; i++)
            {
                auto itr = dict.find(line[i]);
                if(itr!=dict.end())
                    p+=itr->second;
            }
        }
        cout<<fixed<<setprecision(2)<<p/100.00<<"$"<<endl;
    }
}
