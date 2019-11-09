#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    int n;
    int flag;
    while(cin>>n>>str){
        if(str[0]=='0' && n==0)break;
         flag =1;
        for(int i=0; str[i]; i++){
            int x = (int)str[i]-48;
            if(x!=n)
            {
                if(x!=0)
                    flag=0;
                if(flag==0)
                    cout<<x;
            }


        }
        if(flag==1)
            cout<<"0"<<endl;
        else
            cout<<endl;

    }
    return 0;
}
