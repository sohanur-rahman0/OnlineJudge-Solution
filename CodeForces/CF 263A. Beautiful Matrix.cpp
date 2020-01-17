#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6][6],ii,jj,n;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++){
            cin>>n;
            arr[i][j] = n;

            if(arr[i][j]==1){
                ii = i;
                jj = j;
            }
        }
    }
    if(ii<3)ii=3-ii;
    else ii=ii-3;
    if(jj<3)jj=3-jj;
    else jj=jj-3;
    cout<<ii+jj<<'\n';
}

