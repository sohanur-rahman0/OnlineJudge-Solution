#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c=0;

    cin>>n;
    string word[n];
    for(int i=0; i<n; i++)
    {
        cin>>word[i];
    }
    cin>>m;
    string compare[m];
    for(int i=0; i<m; i++)
    {
        cin>>compare[i];

    }
    for(int i=0; i<m; i++){
            c=0;
        for(int j=0; j<n; j++){
            if(word[j]==compare[i])
            {
                c++;
            }
        }
        if(c>0)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }


}

