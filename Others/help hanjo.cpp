#include <iostream>
using namespace std;

int main()
{
    long long int a,b,tc,c=0,ca=1,i,j;
    cin>>tc;

    while(tc--)
    {
        cin>>a>>b;

        long long int arr[b] = {0};
        for(i = 2; i < b; i++)
        {
            for(j = i * i; j < b; j+=i)
            {
                arr[j - 1] = 1;
            }
        }

        for(i = 1; i < b; i++)
        {
            if (arr[i - 1] == 0)
            {


                if(i>=a)
                    c++;
            }

        }


        cout<<"Case "<<ca++<<": "<<c<<endl;

        c=0;
    }
    return 0;
}
