#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n && n!=0){
        if(n<=101)
            cout<<"f91("<<n<<") = "<<91<<endl;
        else
            cout<<"f91("<<n<<") = "<<n-10<<endl;
    }
    return 0;
}
