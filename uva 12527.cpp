#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    bool flag;
    int num[4];
    while(cin>>n>>m)
    {
        int c=0;
        for(int i=n; i<=m; i++)
        {
            int d = 0;
            flag = false;
            int number = i;
            while(number){
                num[d] = number%10;
                number/=10;
                d++;
            }
            for(int i=0; i<d; i++)
            {
                for(int j=i+1; j<d; j++)
                {
                    if(num[i]==num[j])
                        flag = true;
                }
            }
            if(!flag)c++;
        }
        cout<<c<<endl;
    }
}

