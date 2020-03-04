#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    ///string arr[27] = {"@","8","(","|)","3","#","6","[-]","|","_|","|<","1","[]\/[]","[]\[]","0","|D","(,)","|Z","$","']['","|_|","\/","\/\/","}{","`/","2"};
    transform(str.begin(),str.end(),str.begin(),::tolower);
    for(int i=0; str[i]; i++)
    {
        if(isalpha(str[i])==0){
            cout<<str[i];
        }else{
           if(str[i]=='a')
            cout<<"@";
           else if(str[i]=='b'){
            cout<<"8";
           }
           else if(str[i]=='c'){
            cout<<"(";
           }
           else if(str[i]=='d'){
            cout<<"|)";
           }
           else if(str[i]=='e'){
            cout<<"3";
           }
           else if(str[i]=='f'){
            cout<<"#";
           }
           else if(str[i]=='g'){
            cout<<"6";
           }
           else if(str[i]=='h'){
            cout<<"[-]";
           }
           else if(str[i]=='i'){
            cout<<"|";
           }
           else if(str[i]=='j'){
            cout<<"_|";
           }
           else if(str[i]=='k'){
            cout<<"|<";
           }
           else if(str[i]=='l'){
            cout<<"1";
           }
           else if(str[i]=='m'){
            cout<<"[]\\/[]";
           }
           else if(str[i]=='n'){
            cout<<"[]\\[]";
           }
           else if(str[i]=='o'){
            cout<<"0";
           }
           else if(str[i]=='p'){
            cout<<"|D";
           }
           else if(str[i]=='q'){
            cout<<"(,)";
           }else if(str[i]=='r'){
            cout<<"|Z";
           }
           else if(str[i]=='s'){
            cout<<"$";
           }
           else if(str[i]=='t'){
            cout<<"']['";
           }
           else if(str[i]=='u'){
            cout<<"|_|";
           }
           else if(str[i]=='v'){
            cout<<"\\/";
           }
           else if(str[i]=='w'){
            cout<<"\\/\\/";
           }
           else if(str[i]=='x'){
            cout<<"}{";
           }
           else if(str[i]=='y'){
            cout<<"`/";
           }
           else if(str[i]=='z'){
            cout<<"2";
           }

        }

    }
    cout<<endl;
}
