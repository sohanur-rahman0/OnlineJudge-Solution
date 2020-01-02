#include<bits/stdc++.h>

using namespace std;

int main()
{
    char arr[100];
    int i;
    while(cin.getline(arr,100))
    {
        int ci=0,cb=0,l;
        l = strlen(arr);
        for(i=0; i<l; i++)
        {
            if(arr[i]=='_')
            {

                if(ci==0)
                {
                    cout<<"<i>";
                    ci++;
                }
                else
                {
                    ci=0;
                    cout<<"</i>";
                }
            }
            else if(arr[i]=='*')
            {
                if(cb==0)
                {
                    cout<<"<b>";
                    cb++;
                }
                else
                {
                    cout<<"</b>";
                    cb=0;
                }
            }
            else
            {
                cout<<arr[i];
            }

        }
        cout<<endl;

    }

    return 0;
}
