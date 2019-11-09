#include<bits/stdc++.h>
using namespace std;
int main()
{
    char input[500],rev[500],arr[500],str[500];
    int l,c,check;
    while(gets(input))
    {
        if(strcmp(input,"DONE")==0)break;
        l = strlen(input);
        c = 0;
        check = 0;
        for(int i=0; i<l; i++){

            if(isalpha(input[i])){
                arr[c] = input[i];
                c++;
            }
        }
        for(int i=0; i<c; i++){
            arr[i] = tolower(arr[i]);
        }
        //arr[c] = '\0';

        //cout<<c;
        int j;
       for(int i=0,j=c-1; i<c, j>=0; i++,j--){
        if(arr[i]==arr[j])
            check++;
       }
     if(check == c)
        cout<<"You won't be eaten!"<<endl;
     else
        cout<<"Uh oh.."<<endl;
    }
    return 0;
}
