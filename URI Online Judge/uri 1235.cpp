#include<bits/stdc++.h>
#include<string.h>
#include<stdio.h>

using namespace std;

int main()
{
    int tc,l,i;
    char arr[100];
    cin>>tc;
    getchar();
    while(tc--)
    {

        gets(arr);

        l = strlen(arr);

        for(i=(l/2)-1; i>=0; i--){

            cout<<arr[i];


        }

        for(i=l-1; i>=(l/2); i--){

            cout<<arr[i];


        }

        cout<<endl;

    }
    return 0;
}
