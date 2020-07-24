#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,sml,big,y,j;
    cin>>t;
    while(t--)
    {
        sml = 0;
        big = 0;

        cin>>y;
        int a[y];

        for(j = 0; j<y; j++){cin>>a[j];}

        for (j=0;j<=y-1;j++)
        { //sml=0;
        //big=0;
            if(a[j]<a[j+1])
            big++;
            else if(a[j]>a[j+1])
            sml++;
        }
        cout<<big<<" "<<sml<<endl;
    }
}
