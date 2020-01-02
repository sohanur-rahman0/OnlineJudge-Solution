#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char arr[101];
    int tc,l;

    cin>>tc;
    while(tc--)
    {
        cin>>arr;

        l = strlen(arr);
        if(l<=10)
            cout<<arr<<endl;
            else{
                l-=2;
                cout<<arr[0]<<l<<arr[l+1]<<endl; ///because i have reduced the value of by 2 thats why i had to l+1 to print the last character
            }
    }
    return 0;
}

