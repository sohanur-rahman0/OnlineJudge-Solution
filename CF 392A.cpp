#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    if(n==0){
        cout<<1<<endl;
        return 0;
    }
    cout<<(int)4*(int)floor(n*sqrt(2));
}
