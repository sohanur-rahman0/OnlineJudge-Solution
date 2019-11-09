#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y,z,buy,change;
    cin>>x>>y>>z;
    buy = ceil((x+y)/z);
    if(ceil(x/z)+ceil(y/z)==buy){
        change = 0;
        cout<<buy<<" "<<change<<endl;
    }
    else{
        change = min(z - (x % z),z - (y % z));
        cout<<buy<<" "<<change<<endl;
    }
    return 0;

}
