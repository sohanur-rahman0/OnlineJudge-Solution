#include<bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    while(cin>>input){
        int h = (int)input[1]-'0';
        int h1 = (int)input[0]-'0';
        int hh = (h1 * 10 + h%10);
        if(input[8] == 'A'){
            if(hh==12)
            {
                cout<<"00";
                for(int i=2; i<=7; i++)
                    cout<<input[i];
            }
            else{
                for(int i=0; i<=7; i++)
                    cout<<input[i];
            }
        }else{
            if(hh==12)
            {
                cout<<"12";
                for(int i=2; i<=7; i++)
                    cout<<input[i];
                }else{
                    hh = hh+12;
                    cout<<hh;
                    for(int i=2; i<=7; i++)
                        cout<<input[i];
                }
        }
        cout<<endl;
    }
    return 0;
}
