#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long x,y,sum=0,c=0,s=0,count[1005],j=0;
    cin>>x>>y;
    long arr[x];

    for(int i=0; i<x; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    ///did not solve yet
    if(sum<y)
        cout<<"-1"<<endl;
    else
    {
        int p = 0;
        j = 0;
        for(int i=0; i<x; i++)
        {
            j+=i;

            while(j<x)
            {

                s += arr[j];
                c++;
                j++;
                if(s>=y)
                {
                    count[p] = c;
                    p++;
                    break;
                }

            }
            //if(s<y)break;
            s = 0;
            c = 0;
            j = 0;
        }
//     for(int i=0; i<p; i++)
//        cout<<count[i]<<" ";
//        cout<<endl;
        sort(count,count+p);
        cout<<count[0]<<endl;
    }

}
