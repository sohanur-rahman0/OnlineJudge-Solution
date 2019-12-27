#include<iostream>
using namespace std;
int main()
{
    int tc,n;
    cin>>tc;
    while(tc--)
    {
        int i;
        cin>>n;
        if(n==1)
            cout<<"0"<<endl;
        else{
            for(i=1; i<n; i++)
            {
                if((i*(i+1)/2)+1>=n)
                {
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }
}
