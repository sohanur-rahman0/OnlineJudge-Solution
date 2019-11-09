#include<iostream>
#include<string>
using namespace std;
int main()
{
    string input,word = "hello";
    int j=0,count=0;
    cin>>input;
    for(int i=0; input[i]; i++)
    {
        if(input[i]==word[j])
        {
           count++;
           j++;
        }
        if(count==5)
            break;
    }
    if(count==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
