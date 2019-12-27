#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    char c;
    while(getline(cin,str) && str[0]!='*')
    {
        bool flag = true;
        transform(str.begin(),str.end(),str.begin(),::tolower);
        c = str[0];

        for(int i=0; str[i]; i++)
        {
            if(!isalpha(str[i]))
            {

                if(str[i+1]==c)
                    flag = true;
                else if(str[i+1]!=c)
                {
                    flag = false;
                    break;
                }
            }

        }
        if(flag)
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;
    }

}
