#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,sum=0;
    vector<int>n;
    do{
        int input;
        if(cin>>input)n.push_back(input);
    }while(cin && cin.peek()!='\n');
 l = n.size();


    for(int i=0; i<l; i++)
        {
            sum += n[i];
        }
        cout<<sum-(l-1)<<endl;
    return 0;
}
