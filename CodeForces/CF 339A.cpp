#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool flag = true;
    string s;
    cin>>s;
    int one,two,three;
    one = two = three = 0;
    for(int i=0; s[i]; i++)
    {
        if(s[i]=='1')
            one++;
        else if(s[i]=='2')
            two++;
        else if(s[i]=='3')
            three++;
    }
    //cout<<one<<" "<<two<<" "<<three;
    for(int i=0; i<one; i++)
    {
        if(flag==true){
            cout<<"1";
            flag = false;
        }
        else
            cout<<"+1";
    }
      for(int i=0; i<two; i++)
    {
        if(flag==true){
            cout<<"2";
            flag = false;
        }
        else
            cout<<"+2";
    }
      for(int i=0; i<three; i++)
    {
        if(flag==true){
            cout<<"3";
            flag = false;
        }
        else
            cout<<"+3";
    }
    cout<<endl;
    return 0;


}
