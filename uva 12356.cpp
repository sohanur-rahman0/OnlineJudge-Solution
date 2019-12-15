#include<iostream>
#include<cstring>
using namespace std;

int main()
{

    int s,b,l,r;
    while(cin>>s>>b && s!=0 && b!=0)
    {
        int left[s+5];
        int right[s+5];

        for(int i=0; i<=s; i++){
            left[i] = i-1;
            right[i] = i+1;
        }
        for(int i=0; i<b; i++)
        {
            cin>>l>>r;
            if(left[l]<1)
                cout<<"* ";
            else
                cout<<left[l]<<" ";
            if(right[r]>s)
                cout<<"*"<<endl;
            else
                cout<<right[r]<<endl;

            left[right[r]]=left[l];
            right[left[l]]=right[r];
        }
        cout<<"-"<<endl;
    }
}
