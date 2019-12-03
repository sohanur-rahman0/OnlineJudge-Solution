#include<iostream>
#include<string>
#include<map>
#include<algorithm>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    string str,tmp;
    multimap<string,string>dict;
    vector<string>anagram;
    while(cin>>str && str[0]!='#')
    {
        tmp = str;
        //cout<<tmp;
        transform(tmp.begin(),tmp.end(),tmp.begin(),::tolower);
        sort(tmp.begin(),tmp.end());
        dict.insert(pair<string,string>(tmp,str));
    }
    for(auto itr:dict)
    {
        if(dict.count(itr.first)==1)
            anagram.push_back(itr.second);
    }

    sort(anagram.begin(),anagram.end());
    for(auto i:anagram)
    {
        cout<<i<<endl;
    }

}
