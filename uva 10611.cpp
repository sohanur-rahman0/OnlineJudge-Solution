#include<iostream>
using namespace std;
int main()
{
    long long n;
    bool f = false;
    cin>>n;
    long long arr[50001]={0};
    for(int i=0; i<n; i++)
        cin>>arr[i];
    long long q,qv;
    cin>>q;
    while(q--)
    {
        f = false;
        cin>>qv;
        for(int i=0; i<n; i++)
        {
            if(arr[i]>=qv)
            {
                if(arr[i-1]>0)
                    cout<<arr[i-1]<<" ";
                else
                    cout<<"X ";
                while(qv==arr[i])
                    i++;
                    if(arr[i]>qv)
                        cout<<arr[i]<<endl;
                    else if(arr[i+1]>0)
                        cout<<arr[i+1]<<endl;
                    else
                        cout<<"X"<<endl;
                    f = true;
                    break;

            }
        }
        if(!f)
            cout<<arr[n-1]<<" X"<<endl;
    }
}
