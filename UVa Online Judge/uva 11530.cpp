#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc,i,c=0,t=1,n[]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
    char arr[105];
    cin>>tc;
    getchar();
    while(tc--)
    {
        c = 0;
        cin.getline(arr,105);

        for(i=0; i<arr[i]; i++){
            if(arr[i]==' ')c++;
            else
                c+= n[arr[i] - 'a'];
        }
        cout<<"Case #"<<t++<<": "<<c<<endl;
    }
}
