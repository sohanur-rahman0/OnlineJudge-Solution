#include<bits/stdc++.h>

using namespace std;

int main()
{
    char arr[101],str[101];
    string s;
    while(getline(cin, s))
    {


        int i, j=0;
        for(i=0; s[i]!=','; i++)
            arr[j++]=s[i];
            arr[j]='\0';


        for(i=j+1,j=0; s[i]; i++)

            str[j++]=s[i];

            str[j]='\0';

        cout<<arr<<endl<<str<<endl;

    }
    return 0;
}

