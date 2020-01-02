#include<bits/stdc++.h>
using namespace std;
int main()
{
    long a,b,i,temp,count;
    while(cin>>a>>b && a!=0 && b!=0){
        count = 0;
        for(i=a; i<=b; i++){
                temp = sqrt(i);
            if((temp*temp)==i)count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
