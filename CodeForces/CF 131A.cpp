#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0,l;
    string word;
    cin>>word;
    l = word.length();
    for(int i=0; word[i]; i++)
    {
        if(isupper(word[i]))
            c++;
    }
    cout<<c<<endl;
    if(c==l){
        transform(word.begin(),word.end(),word.begin(),::tolower);
    }
    if((c==(l-1)) && (islower(word[0]))){
        word[0] = toupper(word[0]);
        for(int i=1; i<l; i++){
            word[i] = tolower(word[i]);
        }
    }

    cout<<word<<endl;
}
