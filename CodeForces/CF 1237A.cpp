#include<bits/stdc++.h>
using namespace std;
int main()
{

    int ai;
    int n,c=1;
    cin>>n;
    while(n--){
        cin>>ai;
        if(ai%2==0){
            cout<<ai/2<<endl;

        }else{
        cout<<(ai+c)/2<<endl;
        c*=-1;
        }

        }

    return 0;

}
