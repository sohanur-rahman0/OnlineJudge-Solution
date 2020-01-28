#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<string>words;
    char c;
    string word="";
    while(cin.get(c))
    {
        if(isalpha(c))
        {
            word+=tolower(c);
        }
        else
        {
            words.insert(word);
            word.clear();
        }
    }
    if(!word.empty())
    {
        words.insert(word);
        word.clear();
    }
    words.erase(words.begin());
    for(auto i:words)
    {
        cout<<i<<endl;
    }

}
