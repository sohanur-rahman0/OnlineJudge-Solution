#include<iostream>
using namespace std;
int main()
{
    ///did not solved yet
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n,q,l,r;
    cin>>n>>q;
    long arr[n+1] = {0};
    while(q--)
    {
        cin>>l>>r;

        for(int i=l; i<=r; i++)
        {
            if(arr[i]==0)
                arr[i] = 1;
            else
                arr[i] = 0;
        }
    }
    cout<<arr[1];
    for(int i=2; i<=n ; i++)
        cout<<" "<<arr[i];
    cout<<endl;

}
