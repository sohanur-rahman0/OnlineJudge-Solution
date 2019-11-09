#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[50],c=0,sum=0,i;
    do{
            cin>>a[c];
            c++;

    }while(cin && cin.peek()!='\n');


  for(i=0; i<c; i++)
        {
            sum += a[i];
        }
        cout<<sum-(c-1)<<endl;

        return 0;

}
