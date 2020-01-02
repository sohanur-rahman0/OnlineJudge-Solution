#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc,i=1;
    double c,f,d;
    cin>>tc;
    while(tc--){
        cin>>c>>f;
        d = c + f * (5.0/9.0);
        cout<<"Case "<<i++<<": "<<fixed<<setprecision(2)<<d<<endl;
    }
    return 0;
}
